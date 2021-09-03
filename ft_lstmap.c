#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  t_list *nlst;
  t_list *elem;
  t_list *nelem;

  nlst = NULL;
  if (lst && f)
  {
    elem = lst;
    nelem = f(elem);
    nlst = nelem;
    while (elem->next)
    {
      nelem->next = f(elem->next);
      nelem = nelem->next;
      elem = elem->next;
    }
  }
  return (nlst);
}
