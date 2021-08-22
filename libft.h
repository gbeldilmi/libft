#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_isspace(char c);
int ft_strcmp(const char *s1, const char *s2);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strstr(char *str, char *to_find);
int ft_tolower(int c);
int ft_toupper(int c);

#endif /* end of include guard: LIBFT_H */
