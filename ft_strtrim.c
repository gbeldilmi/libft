#include "libft.h"

char *ft_strtrim(const char *s)
{
  size_t start;
  size_t end;
  char *str;

  str = ft_strnew(0);
  if (s)
  {
    start = 0;
    end = ft_strlen(s);
    while (ft_isspace(s[start]) && start != end)
    {
      start++;
    }
    if (start != end) {
      while (ft_isspace(s[end - 1]))
      {
        end--;
      }
      str = ft_strsub(s, start, end - start);
    }
  }
  return (str);
}
