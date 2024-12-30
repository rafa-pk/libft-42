/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:30:41 by raica-ba          #+#    #+#             */
/*   Updated: 2024/12/27 16:31:03 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char const c)
{
	size_t	i;
	int		word;
	size_t	count;

	i = 0;
	word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && !word)
		{
			word = 1;
			count++;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static char	*word_malloc(char const *s, size_t length)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, length + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		length;
	const char	*start;
	char		**table;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	table = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!table)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = &s[i];
			length = 0;
			while (s[i] != c && s[i] != '\0')
			{
				length++;
				i++;
			}
			table[j++] = word_malloc(start, length);
			if (!table[j - 1])
			{
				while (j > 0)
					free(table[--j]);
				free(table);
				return (NULL);
			}
		}
		else
			i++;
	}
	table[j] = NULL;
	return (table);
}
