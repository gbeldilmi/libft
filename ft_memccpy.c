#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  size_t i;
  unsigned char *ptr_dst;
  unsigned char *ptr_src;

  if (!dst && !src)
  {
    return (NULL);
  }
  i = 0;
  ptr_dst = (unsigned char *) dst;
  ptr_src = (unsigned char *) src;
  while (i < n)
  {
    ptr_dst[i] = ptr_src[i];
    if (ptr_src[i] == (unsigned char) c)
    {
      return (dst + i + 1);
    }
    i++;
  }
  return (NULL);
}
