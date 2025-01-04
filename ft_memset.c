/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:27:13 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 20:33:05 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	byte_value;
	unsigned char	*string;

	i = 0;
	byte_value = (unsigned char) c;
	string = (unsigned char *) b;
	while (i < len)
	{
		string[i] = byte_value;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char buffer[20];

    memset(buffer, 0, sizeof(buffer));
    ft_memset(buffer, 'A', 7);
    printf("Buffer after ft_memset: %s\n", buffer);
    memset(buffer, 'A', 7);
    printf("Buffer after standard memset: %s\n", buffer);
    return (0);
}*/
