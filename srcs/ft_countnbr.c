/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:41:41 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/08 20:39:37 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_countnbr(int nbr)
{
	int	ret;

	ret = 0;
	if (nbr < 0)
	{
		ret++;
		nbr = - nbr;
	}
	while (nbr > 0)
	{
		ret++;
		nbr = nbr / 10;
	}
	return (ret);
}
