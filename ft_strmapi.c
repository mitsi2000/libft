/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:37:34 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/03 16:25:20 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int i;

    i = 0;
    res = malloc(ft_strlen(s) + 1);
    if (!res)
        return (NULL);
    while (s[i] != '\0')
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}