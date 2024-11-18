/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:36:42 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:36:56 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
