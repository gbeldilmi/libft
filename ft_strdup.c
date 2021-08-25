#include "libft.h"

char *ft_strdup(const char *s)
{
  int i;
  char *str;

  str = NULL;
  if (!(str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1))))
  {
    return (NULL);
  }
  i = 0;
  while (s[i])
  {
    str[i] = s[i];
    i++;
  }
  str[i] = '\0';
  return (str);
}
