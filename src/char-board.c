#include "char-board.h"

#include <stdio.h>
#include <stdlib.h>
#include "j-char.h"
#include "set.h"

J_Char **char_board;
J_Char **gap;

void memo_cb(void) {
    char_board = (J_Char **)malloc(sizeof(J_Char *) * v_char_board);
    if(!char_board)
    {
        fprintf(stderr, "sys error: no get char_board memory\n");
        free_cb();
        exit(1);
    }
    for(int v = 0; v < v_char_board; v ++)
    {
        char_board[v] = (J_Char *)malloc(sizeof(J_Char) * h_char_board);
        if(!char_board[v])
        {
            fprintf(stderr, "sys error: no get char_board[%d] memory\n", v);
            free_cb();
            exit(1);
        }
    }
    gap = (J_Char **)malloc(sizeof(J_Char *) * v_char_board * v_gap);
    if(!gap)
    {
        fprintf(stderr, "sys error: no get gap memory\n");
        free_cb();
        exit(1);
    }
    for(int v = 0; v < v_char_board * v_gap; v ++)
    {
        gap[v] = (J_Char *)malloc(sizeof(J_Char) * h_char_board);
        if(!gap[v])
        {
            fprintf(stderr, "sys error: no get gap memory\n");
            free_cb();
            exit(1);
        }
    }
    return;
}

void free_cb(void) {
    for(int v = 0; v < v_char_board; v ++)
    {
        free(char_board[v]);
    }
    free(char_board);
    for(int v = 0; v < v_char_board * v_gap; v ++)
    {
        free(gap[v]);
    }
    free(gap);
}

void put_cb(void) {
    for(int v = 0; v < v_char_board; v ++)
    {
        for(int h = 0; h < h_char_board; h ++)
        {
            putjc(char_board[v][h]);
            for(int hg = 0; hg < h_gap; h ++)
            {
                printf(" ");
            }
        }
        for(int vg = 0; vg < v_gap; vg ++)
        {
            for(int h = 0; h < h_char_board; h ++)
            {
                putjc(gap[v * vg + vg][h]);
                for(int hg = 0; hg < h_gap; h ++)
                {
                    printf(" ");
                }
            }
        }
    }
    return 0;
}
