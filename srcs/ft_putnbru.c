/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:52:06 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/08 20:52:58 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbru(unsigned int nbr)
{
	char	nr;

	if (nbr > 9)
	{
		ft_putnbru(nbr / 10);
		nr = '0' + nbr % 10;
		write(1, &nr, 1);
	}
	else
	{
		nr = '0' + nbr;
		write(1, &nr, 1);
	}
}
