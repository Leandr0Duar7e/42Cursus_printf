/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:41:41 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/09 17:34:57 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_countnbr(int nbr)
{
	int	ret;

	ft_putnbr_fd(nbr, 1);
	ret = 0;
	if (nbr == 0)
		ret++;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			ret++;
			nbr = -214748364;
		}
		ret++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		ret++;
		nbr = nbr / 10;
	}
	return (ret);
}
