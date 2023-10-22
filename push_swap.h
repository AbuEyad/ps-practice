#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
    int            value;
    struct s_stack *next;
    struct s_stack *prev;
} t_stack;

typedef struct s_push_swap
{
    t_stack *a;
    t_stack *b;
} t_push_swap;

void    *ft_memset(void *b, int c, size_t len);

#endif
