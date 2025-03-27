#include "ft_push_swap.h"
#include <stdlib.h>


/* int main (int argc,char** argv){
    (void)argc; 
    t_stack stack;
    if (argc < 2)
        return (0);
    
    stack.size = argc -1;
    while (argc > 0)
        stack.content->argv[stack.size]
        if (argv[i] == argv[i +1])
            exit (1);
    return 0;
}
 */
int ft_check_duplicates(char **argv,t_stack *stack)
{
    while (*argv[stack->size])

}

int main(int argc, char **argv)
{
    t_stack *stack = NULL;
    int i;
    int value;
    if (argc < 2)
        return (0);

    i = 1;
    while (argv[i])
    {
        value = ft_atoi(argv[i]);
        stack = ft_lstadd_back(stack, value);
        i++;
    }

    if (ft_check_duplicates(stack))
    {
        ft_lstclear(stack);
        ft_error();
    }

    ft_lstclear(stack);
    return (0);
}
