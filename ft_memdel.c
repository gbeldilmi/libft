#include "libft.h"

void memdel(void **ap)
{
  if (ap && *ap)
  {
    free(*ap);
    *ap = NULL;
  }
}
