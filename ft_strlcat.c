/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:34:12 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:34:25 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *restrict dest, const char *restrict src,
		size_t destsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = ft_strlen(src);
	while (dest[dest_len] != '\0' && dest_len < destsize)
		dest_len++;
	if (destsize <= dest_len)
		return (src_len + destsize);
	while (src[i] != '\0' && (dest_len + i) < destsize - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if ((dest_len + i) < destsize)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	dest[14] = "";
	const char	src[] =  " gah funciona";
	char	dest2[14] = "";
	printf("%zu\n", ft_strlcat(dest, src, 9));
	printf("%zu\n", strlcat(dest2, src, 9));
	return (0);
}*/
