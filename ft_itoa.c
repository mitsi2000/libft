/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:31:43 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/09 17:31:45 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		ln;
	char	*str;
	long	nbr;
	int		i;

	nbr = n;
	ln = len(nbr);
	str = malloc ((ln + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	if (nbr == 0)
		str[0] = '0';
	i = ln - 1;
	while (nbr != 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	str[ln] = '\0';
	return (str);
}
