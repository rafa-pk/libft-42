/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:57:56 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 16:28:42 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
/*
int	main(void)
{
	size_t	count;
	size_t	size;

	count = 4;
	size = 4;
	printf("buffer after: %s\n", (char *)ft_calloc(count, size));
	return (0);
}*/
