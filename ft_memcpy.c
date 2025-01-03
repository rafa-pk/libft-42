/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:25:53 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 17:44:43 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	unsigned char	dst[41];
	unsigned char	src[] = "raicaba@student.42lisboa.com";
	size_t			n = 8;

	printf("src b4: %s\n dst b4: %s\n", src, dst);
	printf("src after: %s\n dst after: %s\n", 
	src, (unsigned char *)ft_memcpy(dst, src, n));
	return (0);
}*/
