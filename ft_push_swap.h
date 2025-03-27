




int ft_check_duplicates(char **argv,t_stack *stack);

typedef  struct stack
{
    int size;
    int *content;
}t_stack;

typedef struct s_node
{
    int value;
    struct s_node *next;
} t_node;
