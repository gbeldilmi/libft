#include "libft.h"

static size_t ft_countwords(char const *s, char c)
{
  size_t i;
  size_t words;

  words = 0;
  if (s)
  {
    i = 0;
    while (s[i])
    {
      if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
      {
        words++;
      }
      i++;
    }
  }
  return (words);
}

static size_t ft_countchar(char const *s, char c, size_t b)
{
  size_t l;

  l = 0;
  if (s)
  {
    while (s[b + l] != c && s[b + l] != '\0')
    {
      l++;
    }
  }
  return (l);
}

char **ft_strsplit(char const *s, char c)
{
  char **arr;
  size_t v;
  size_t w;
  size_t l;
  size_t i;

  arr = NULL;
  if (s)
  {
    w = ft_countwords(s, c);
    if ((arr = (char **) ft_memalloc(sizeof(char *) * (w + 1))))
    {
      v = 0;
      i = 0;
      while (v < w)
      {
        l = ft_countchar(s, c, i);
        if (l)
        {
          arr[v] = ft_strsub(s, i, l);
          v++;
          i += l;
        }
        else
        {
          i++;
        }
      }
      arr[w] = ft_strnew(0);
    }
  }
  return (arr);
}
