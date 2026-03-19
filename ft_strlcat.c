/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:50:19 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/09 17:36:19 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= i || size == 0)
		return (size + j);
	while (src[k] != '\0' && i + k < size - 1)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}
