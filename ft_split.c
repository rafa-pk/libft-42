/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:30:41 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 13:45:45 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static int	word_to_table(char **table, char const *s, char c, size_t *i)
{
	size_t		j;
	size_t		lenght;
	const char	*start;

	j = 0;
	while (s[*i] != '\0')
	{
		if (s[*i] != c)
		{
			start = &s[*i];
			lenght = 0;
			while (s[*i] != c && s[*i] != '\0')
			{
				lenght++;
				(*i)++;
			}
			table[j++] = word_malloc(start, lenght);
			if (!table[j - 1])
				return (1);
		}
		else
			(*i)++;
	}
	table[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**table;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	table = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!table)
		return (NULL);
	if (word_to_table(table, s, c, &i))
	{
		while (j > 0)
			free(table[--j]);
		free(table);
		return (NULL);
	}
	return (table);
}
/*
int	main(void)
{
	char const	*s;
	char		c;
	char		**result;
	size_t		i;

	s = "coco,   ,  cocoooo )(/, ?6 copco,, coco, co,cco";
	c = ',';
	i = 0;
	result = ft_split(s, c);
	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	while (result[i] != NULL)
	{
		printf("Word %zu: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
