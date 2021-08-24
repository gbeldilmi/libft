#include "libft.h"

int ft_atoi(const char *nptr)
{
  int nbr;
  short neg;
  size_t i;

  nbr = 0;
  i = 0;
  negative = 1;
  while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
  {
    i++;
  }
  if (nptr[i] == '+' || nptr[i] == '-')
  {
    if (nptr[i] == '-')
    {
      negative *= -1;
    }
    i++;
  }
  while (ft_isdigit(nptr[i]))
  {
    nbr = nbr * 10 + (nptr[i] - '0');
    i++;
  }
  return (nbr * negative);
}
