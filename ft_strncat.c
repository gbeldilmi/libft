#include "libft.h"

char *ft_strncat (char *dest, const char *src, size_t n)
{
  size_t i;

  i = 0;
  if (n == 0)
  {
    return (dest);
  }
  while (src[i] && i < n)
  {
    dest[ft_strlen(dest)] = src[i];
    i++;
  }
  dest[ft_strlen(dest)] = '\0';
  return (dest);
}
