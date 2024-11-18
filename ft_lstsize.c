/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:22:59 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:23:12 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current_node;

	count = 0;
	current_node = lst;
	if (!lst)
		return (0);
	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
