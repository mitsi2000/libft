/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:45:17 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/04 10:37:30 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *s_ptr; 

    s_ptr = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        if(s_ptr[i] == (unsigned char)c)
            return ((void *)(s_ptr + i));
        i++;
    }
    return (NULL);
}