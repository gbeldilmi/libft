#include "libft.h"

char *ft_strsub(const char *s, unsigned int start, size_t len)
{
  size_t i;
  size_t len_s;
  char *str;

  i = 0;
  if ((str = ft_strnew(len)) && s)
  {
    len_s = ft_strlen(s);
    if (len_s < start)
    {
      str = ft_strdup("");
    }
    else
    {
      len_s -= start;
      if (len_s < len)
      {
        len = len_s;
      }
      while (i < len)
      {
        str[i] = s[start + i];
        i++;
      }
      str[i] = '\0';
    }
  }
  return (str);
}
