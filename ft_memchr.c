/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:24:46 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 17:22:08 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*str;

	i = 0;
	ch = (unsigned char) c;
	str = (const unsigned char *) s;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *) &str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	s[] = "blabl.a blalab";
	int				c;
	size_t			n;
	unsigned char	*result;
	c = '.';
	n = 8;
	result = ft_memchr(s, c, n);
	printf("primeira ocurrencia: %s", result);
	return (0);
}*/
