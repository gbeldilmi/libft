#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  unsigned char *dest;
  unsigned char *source;

  dest = (unsigned char *) dst;
  source = (unsigned char *) src;
  if (dest > source)
  {
    while (len--)
    {
      dest[len] = source[len];
    }
  }
  else if (dest < source)
  {
    ft_memcpy(dst, src, len);
  }
  return (dst);
}
