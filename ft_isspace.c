#include "libft.h"

int ft_isspace(char c)
{
  return (c == '\f' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == ' ');
}
