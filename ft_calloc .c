/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc .c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:48:08 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/09 13:58:51 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *ptr;
    size_t i;
	size_t longueur;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
    i = 0;
	longueur = nmemb * size;
    ptr = malloc(longueur);
    if(!ptr)
        return(NULL);
    while (i < longueur)
    {
        ptr[i] = 0;
        i++;
    }
    return (ptr);
}