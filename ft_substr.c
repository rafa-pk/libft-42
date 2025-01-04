/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:39:51 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/04 01:30:07 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlenght;
	char	*substr;

	if (!s)
		return (NULL);
	strlenght = ft_strlen(s);
	if (start >= strlenght)
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	if (len > strlenght - start)
		len = strlenght - start;
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
int main(void)
{
	char const		*s = "eu sou o rafa, mekie?";
	unsigned int	start = 9;
	size_t			len = 14;
	char			*result = ft_substr(s, start, len);

	if (result)
	{
		printf("Sub str: %s\n", result);
		free(result);
	}
	return (0);
}*/
