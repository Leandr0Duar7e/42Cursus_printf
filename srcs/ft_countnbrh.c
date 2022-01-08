/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnbrh.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:38:22 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/08 21:48:25 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_countnbrh(unsigned long long nbr)
{
	int	ret;

	ret = 0;
	while (nbr > 0)
	{
		ret++;
		nbr = nbr / 16;
	}
	return (ret);
}
