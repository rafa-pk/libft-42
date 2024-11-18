/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:24:46 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:25:02 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
