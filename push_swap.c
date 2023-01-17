
void ft_push_swap(char **av)
{
    t_stack stack;
    int     size;
    int     i;

    i = -1;
    size = ft_ps_strlen(av);
    stack.a = malloc(size * sizeof(int));
    if (!stack.a)
        return ;
    stack.a_size = size;
    stack.b = malloc(size * sizeof(int));
    if (!stack.b)
    {
        free(stack.a);
        return ;
    }
    stack.b_size = 0;
    while (i++ < size)
        stack.a[i] = ft_ps_atoi(argv[i], stack.a);
    ft_check_repeat(stack.a, size);
    ft_sort(&stack, size);
    free(stack.a);
    free(stack.b);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        av++;
        if (ac == 2)
        {
            av = ft_split(*av, ' ');
        }
        ft_push_swap(av);
        return (0);
    }
    return (0);
}