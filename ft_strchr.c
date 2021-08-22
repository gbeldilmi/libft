#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  while (*s && *s != c)
  {
    s++;
  }
  if (*s == '\0' && *s != c)
  {
    return (NULL);
  }
  return ((char *) s);
}
