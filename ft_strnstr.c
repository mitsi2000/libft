/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:50:33 by mitrakot          #+#    #+#             */
/*   Updated: 2026/01/27 13:46:25 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (ft_strlen(little) == 0 || big == little)
        return ((char *)big);
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while ((big[i+j]!= '\0') && (little[j] != '\0') && (big[i+j] == little[j]) && (i + j < len))
        {
            if (j == len)
                return ((char *)little);
            j++;
        }
        i++;
    }
    return (0);
}