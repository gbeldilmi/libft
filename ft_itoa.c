#include "libft.h"

static size_t ft_numlen(int n)
{
  size_t l;

  l = 0;
  if (n < 0)
  {
    n *= -1;
    l++;
  }
  while (n > 0)
  {
    n /= 10;
    l++;
  }
  return (l);
}

char *ft_itoa(int n)
{
  char *str;
  size_t i;

  str = NULL;
  i = ft_numlen(n);
  if ((str = ft_strnew(sizeof(char) * (i + 1))))
  {
    str[i] = '\0';
    i--;
    if (n < 0)
    {
      str[0] = '-';
      n *= -1;
    }
    if (n == 0)
    {
      str[i] = '0';
    }
    while (n > 0)
    {
      str[i] = '0' + (n % 10);
      n /= 10;
      i--;
    }
	}
  return (str);
}
