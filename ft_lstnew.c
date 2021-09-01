#include "libft.h"

t_list *ft_lstnew(const void *content, size_t content_size)
{
  t_list *lst;

  lst = NULL;
  if ((lst = (t_list *) ft_memalloc(sizeof(t_list))))
  {
    lst->content = NULL;
    lst->content_size = 0;
    lst->next = NULL;
    if (content)
    {
      if ((lst->content = (void *) ft_memalloc(content_size)))
      {
        ft_memcpy(lst->content, content, content_size);
        lst->content_size = content_size;
      }
    }
  }
  return (lst);
}
