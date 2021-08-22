#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
  size_t to_find_len;

  if (*to_find == '\0')
  {
    return ((char *) str);
  }
  to_find_len = ft_strlen(to_find);
  while (*str != '\0' && len-- >= to_find_len)
  {
    if (*str == *to_find && ft_strncmp(str, to_find, to_find_len) == 0)
    {
      return ((char *) str);
    }
    str++;
  }
  return (NULL);
}
