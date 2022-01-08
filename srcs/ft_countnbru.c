/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnbru.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:53:15 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/08 20:54:23 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_countnbru(unsigned int nbr)
{
	int	ret;

	ret = 0;
	while (nbr > 0)
	{
		ret++;
		nbr = nbr / 10;
	}
	return (ret);
}
