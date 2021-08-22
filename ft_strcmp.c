#include "libft.h"

static int ft_charcmp(int c1, int c2)
{
  if (c1 > c2)
  {
    return (1);
  }
  else if (c1 < c2)
  {
    return (-1);
  }
  return (0);
}

int ft_strcmp(const char *s1, const char *s2)
{
  size_t i;

  i = 0;
  while (s1[i] && s2[i])
  {
    if (s1[i] == s2[i])
    {
      i++;
    }
    else
    {
      break;
    }
  }
  return (ft_charcmp(s1[i], s2[i]));
}
