#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
  t_list *i;

  if (lst && f)
  {
    i = lst;
    while (i)
    {
      f(i->content);
      i = i->next;
    }
  }
}
