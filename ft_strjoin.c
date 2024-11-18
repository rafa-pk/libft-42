/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:33:36 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:33:53 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	size_t		buff_size;
	char		*merge;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	buff_size = ft_strlen(s1) + ft_strlen(s2);
	merge = (char *)malloc(sizeof(char) * (buff_size + 1));
	if (!merge)
		return (NULL);
	while (s1[i] != '\0')
	{
		merge[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		merge[i + j] = s2[j];
		j++;
	}
	merge[i + j] = '\0';
	return (merge);
}
