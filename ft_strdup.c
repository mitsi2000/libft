/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:48:48 by mitrakot          #+#    #+#             */
/*   Updated: 2026/01/29 11:05:28 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strdup(const char *s)
{
    char    *dest;
    size_t i;

    i = 0;
    dest = malloc(ft_strlen(s)+ 1 );
    if(!dest)
        return(NULL);
    while (i < ft_strlen(s))
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}