/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:36:42 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/04 01:05:09 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			while ((i + j) < len && haystack[i + j] == needle[j]
				&& needle[j] != '\0')
				j++;
			if (needle[j] == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*haystack = "skjbns.pwei";
	const char	*needle = ".";
	size_t		len = 8;

	printf("og funct: %s\n", strnstr(haystack, needle, len));
	printf("ma funct: %s\n", ft_strnstr(haystack, needle, len));
	return (0);
}*/
