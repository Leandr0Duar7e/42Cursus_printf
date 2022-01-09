/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dechex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:40:15 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/09 13:47:37 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_printf.h"

void	ft_dechex(unsigned long long dec, char d)
{
	char			imp;
	unsigned long	rest;
	unsigned long	quoc;

	rest = dec % 16;
	quoc = dec / 16;
	if (rest != 0 || (rest == 0 && dec > 15))
		ft_dechex(quoc, d);
	else
		return ;
	if (rest > 9)
	{
		if (d == 'X')
			imp = 'A' + rest - 10;
		else
			imp = 'a' + rest - 10;
		write(1, &imp, 1);
	}
	else
	{
		imp = '0' + rest;
		write(1, &imp, 1);
	}
}
