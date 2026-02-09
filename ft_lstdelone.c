/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:09:52 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/04 01:32:29 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(!lst || !del)
		return;
	del(lst->content);
	free(lst);
}