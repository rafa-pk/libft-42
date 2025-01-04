/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:36:08 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/04 01:00:21 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*us1;
	const unsigned char	*us2;

	i = 0;
	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	while (i < n && (us1[i] != 0 || us2[i]))
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*s1 = "brobrobr";
	const char	*s2 = "brobrobo";
	size_t		n = 8;

	printf("og funct: %d\n", strncmp(s1, s2, n));
	printf("ma funct: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
