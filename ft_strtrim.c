/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:29:00 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/09 14:09:54 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_cmp(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *dest;
    int j;
    int k;
    int l;

	if(!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
        return (ft_strdup(""));
    j = 0;
    k = ft_strlen(s1) - 1;
    l = 0;
    while (s1[j] != '\0' && ft_cmp(set, s1[j]) == 0)
        j++;
    while (k >= 0 && ft_cmp(set, s1[k]) == 0)
        k--;
    if (j > k)
        return (ft_strdup(""));
    dest = malloc(k - j + 2);
    if(!dest)
        return (NULL);
    while (j + l <= k)
        {
            dest[l] = s1[j + l];
            l++;
        }
    dest[l] = '\0';
    return(dest);
}