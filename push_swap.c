#include "push_swap.h"

int main(int argc, char *argv[])
{
    t_push_swap data;

    if (argc < 2)
        return(0);
    ft_memset(&data, 0, sizeof(data));
    data.a = create_stack(argc, argv);




}