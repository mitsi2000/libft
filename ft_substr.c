/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 10:40:01 by mitrakot          #+#    #+#             */
/*   Updated: 2026/01/29 11:56:01 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *dest;
    size_t i;

    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}