#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
  size_t i;

  i = 0;
  while (src[i])
  {
    dest[ft_strlen(dest)] = src[i];
    i++;
  }
  dest[ft_strlen(dest)] = '\0';
  return (dest);
}
