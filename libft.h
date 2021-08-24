#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_isspace(char c);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strcat(char *dest, const char *src);
char *ft_strchr(const char *s, int c);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *dest, const char *src);
char *ft_strdup(const char *s);
int ft_strequ(const char *s1, const char *s2)
int ft_strequ(const char *s1, const char *s2);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
char *ft_strncat (char *dest, const char *src, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_strnequ(const char *s1, const char *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *str, const char *to_find, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(char *str, char *to_find);
int ft_tolower(int c);
int ft_toupper(int c);

#endif /* end of include guard: LIBFT_H */
