/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:40:24 by raica-ba          #+#    #+#             */
/*   Updated: 2024/11/17 18:40:36 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c);
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
