/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:42:59 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/12 18:44:12 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = 0;
	while (1)
	{
		if (*s == (char)c)
			last = s;
		if (*s == '\0')
			break ;
		s++;
	}
	return ((char *)last);
}
