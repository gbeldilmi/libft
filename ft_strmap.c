#include "libft.h"

char *ft_strmap(const char *s, char (*f)(char))
{
  char *str;
  size_t len;
  size_t i;

  str = NULL;
  if (s && f)
  {
    len = ft_strlen(s);
    str = (char *) malloc(sizeof(char) * (len + 1));
  }
  if (str)
  {
    i = 0;
    while (i < len)
    {
      str[i] = (*f)(s[i]);
      i++;
    }
    str[i] = '\0';
  }
  return (str);
}
