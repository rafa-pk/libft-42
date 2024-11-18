/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:55:58 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 23:10:17 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sinal;

	i = 0;
	nb = 0;
	sinal = 0;
	if (str[0] == '-')
		sinal++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
	}
	if (sinal != 1)
		return (-nb);
	return (nb);
}
