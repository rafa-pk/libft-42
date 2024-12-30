/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:39:51 by raica-ba          #+#    #+#             */
/*   Updated: 2024/12/28 16:50:45 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
