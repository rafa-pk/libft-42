/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:37:34 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:38:59 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strleng(const char *str)
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
