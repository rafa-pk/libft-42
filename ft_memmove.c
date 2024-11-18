/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:26:30 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:26:43 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest > source)
	{
		while (len > 0)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
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
