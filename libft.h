/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:56:20 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/09 13:51:12 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>


int ft_atoi(const char *nptr);
void    ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
int ft_strdup(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
size_t ft_strlen(const char *s);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
#endif

typedef struct  s_list
{
    void			*content;
    struct s_list   *next;
}   t_list;