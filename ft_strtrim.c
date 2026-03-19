/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:29:00 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/10 10:46:01 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_verif(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	verifi_start(char const *s, char const *set1)
{
	int	a;

	a = 0;
	while (s[a] != '\0' && ft_verif(set1, s[a]) == 0)
		a++;
	return (a);
}

int	verifi_last(char const *s, char const *set1)
{
	int	b;

	b = ft_strlen(s) - 1;
	while (b >= 0 && ft_verif(set1, s[b]) == 0)
		b--;
	return (b);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		j;
	int		k;
	int		l;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	j = verifi_start(s1, set);
	k = verifi_last(s1, set);
	l = 0;
	if (j > k)
		return (ft_strdup(""));
	dest = malloc(k - j + 2);
	if (!dest)
		return (NULL);
	while (j + l <= k)
	{
		dest[l] = s1[j + l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
