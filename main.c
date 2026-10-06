#include <stdio.h>
#include "libft.h"

int main()
{
    t_list *h = ft_lstnew("abc");
    printf("node number %d\n", ft_lstsize(h));
    ft_lstadd_front(&h, ft_lstnew("def"));
    printf("node number %d\n", ft_lstsize(h));
    printf("node number %d", ft_lstsize(NULL));

}