#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  unsigned char *ptr_s;

  ptr_s = (unsigned char *) s;
  while (n--)
  {
    if (*ptr_s == (unsigned char) c)
    {
      return (ptr_s);
    }
    ptr_s++;
  }
  return (NULL);
}
