#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
  char *dest;
  unsigned int i;

  i = 0;
  dest = (char *) malloc(sizeof(*dest) * (ft_strlen(s1) + ft_strlen(s2) + 1));
  if (dest)
  {
    while (*s1 != '\0')
    {
      dest[i++] = *s1++;
    }
    while (*s2 != '\0')
    {
      dest[i++] = *s2++;
    }
    dest[i] = '\0';
  }
  return (dest);
}
