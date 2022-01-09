/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 20:18:02 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/09 17:05:19 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_printf.h"

int	ft_putstr(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || fd < 0)
		return (0);
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}
