/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:50:33 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/10 13:24:41 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] != '\0') && (little[j] != '\0')
			&& (big[i + j] == little[j]) && (i + j < len))
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
