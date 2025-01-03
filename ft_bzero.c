/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:57:23 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 16:16:50 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = (unsigned char *)s;
	while (i < n)
	{
		buffer[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "182734";
	size_t	n = 6;

	printf("buffer before: %s\n", (char *)s);
	ft_bzero(s, n);
	printf("buffer after: %s\n", (char *)s);
	return (0);
}*/
