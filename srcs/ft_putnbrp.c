/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:42:18 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/08 20:51:54 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbrp(unsigned long long nbr)
{
	char	nr;

	if (nbr > 9)
	{
		ft_putnbrp(nbr / 10);
		nr = '0' + nbr % 10;
		write(1, &nr, 1);
	}
	else
	{
		nr = '0' + nbr;
		write(1, &nr, 1);
	}
}
