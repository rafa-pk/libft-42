/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:57:56 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 17:58:38 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	buff_size;
	void	*buffer;

	buff_size = count * size;
	if (count != 0 && ((buff_size / count) != size))
		return (0);
	buffer = (char *)malloc(sizeof(char) * buff_size);
	if (!buffer)
		return (NULL);
	ft_memset(buffer, 0, buff_size);
	return (buffer);
}
