/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:32:10 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:32:24 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (0);
}
