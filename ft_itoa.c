/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:18:17 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 16:56:43 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static char	*conversion_cases(int n, char *conversion, int neg, int len)
{
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
	conversion_cases(n, conversion, neg, len);
	return (conversion);
}
/*
int	main(void)
{
	int	n;

	n = 97382;
	printf("before itoa: %d\n after itoa: %s\n", n, ft_itoa(n));
	return (0);
}*/
