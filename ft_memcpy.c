/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:38:02 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/04 10:38:04 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
       ((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
       i++;
    }
    return (dest);
}
