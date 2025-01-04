/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:37:34 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/04 01:13:03 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int	ft_strleng(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strleng(s);
	ch = (char) c;
	if (ch == '\0')
		return ((char *) &s[i]);
	i--;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*s = "bskjdbosu";
	int			c = '\0';

	printf("og funct: %s\n", strrchr(s, c));
	printf("ma funct: %s\n", ft_strrchr(s, c));
	return (0);
}*/
