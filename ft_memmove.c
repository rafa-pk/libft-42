/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:26:30 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 20:44:22 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	if (dest > source)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	unsigned char	dst[50];
	unsigned char	src[] = "calculadora 
	frita com gambas e teclado a braz";
	size_t			len = 45;

	printf("src b4: %s\n dest b4: %s\n", src, dst);
	printf("src after: %s\n dest after: %s\n", 
	src, (char *)ft_memmove(dst, src, len));
	return (0);
}*/
