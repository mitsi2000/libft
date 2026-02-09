/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:25:22 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/04 10:38:24 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *ptr;
    unsigned char   value;
    size_t  i;

    ptr = (unsigned char *)s;
    value = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        ptr[i] = value;
        i++;
    }
	return (s);
}
