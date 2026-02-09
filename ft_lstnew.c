/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 21:04:03 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/03 21:23:46 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list *ft_lstnew(void *content)
{
	t_list	*res_elem;

	res_elem = malloc(sizeof(t_list));
	if (!res_elem)
		return (NULL);
	res_elem->content = content;
	res_elem->next = NULL;
	return (res_elem);
}