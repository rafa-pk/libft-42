/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:28:39 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:28:53 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
