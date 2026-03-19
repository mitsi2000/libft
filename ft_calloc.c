/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:29:48 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/09 17:30:29 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			longueur;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	i = 0;
	longueur = nmemb * size;
	ptr = malloc(longueur);
	if (!ptr)
		return (NULL);
	while (i < longueur)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
