#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list  *lst;
  t_list  *t;

  lst = *alst;
  while (lst)
  {
    t = lst->next;
    del(lst->content, lst->content_size);
    free(lst);
    lst = t;
  }
  *alst = NULL;
}
