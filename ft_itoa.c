/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:18:17 by raica-ba          #+#    #+#             */
/*   Updated: 2024/12/28 17:22:50 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*conversion;

	len = int_len(n);
	neg = (n < 0);
	conversion = (char *)malloc(sizeof(char) * (len + 1));
	if (!conversion)
		return (NULL);
	conversion[len] = '\0';
	if (n == 0)
	{
		conversion[0] = '0';
		return (conversion);
	}
	if (n == -2147483648)
	{
		ft_strlcpy(conversion, "-2147483648", len + 1);
		return (conversion);
	}
	if (neg)
		n = -n;
	while (n != 0)
	{
		conversion[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		conversion[0] = '-';
	return (conversion);
}
