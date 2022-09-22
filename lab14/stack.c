#include "DS.h"

void s_push(Stack *p, int x)
{
        p->s_arr[p->s_len] = x;
        p->s_len++;
}

void s_pop(Stack *p)
{
    p->s_arr[p->s_len-1] = NULL;
    p->s_len--;
}

void s_print(Stack *p)
{
        int i;
        for (i = 0; i < p->s_len; i++) {
                printf("%d ", p->s_arr[i]);
        }
        printf("\n");
}