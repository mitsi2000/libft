/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:04:35 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/04 11:51:39 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    int i;
    int j;

    dest = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
    if(!dest)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        dest[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        dest[j] = s2[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}