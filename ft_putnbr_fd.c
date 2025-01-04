/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:28:39 by raica-ba          #+#    #+#             */
/*   Updated: 2025/01/03 20:47:33 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	lnb;

	lnb = n;
	if (lnb < 0)
	{
		lnb = -lnb;
		ft_putchar_fd('-', fd);
	}
	if (lnb >= 10)
	{
		ft_putnbr_fd(lnb / 10, fd);
		ft_putchar_fd(lnb % 10 + '0', fd);
	}
	else
		ft_putchar_fd(lnb + '0', fd);
}
/*
int	main(void)
{
	int	n;
	int	fd;

	n = 384473;
	fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}*/
