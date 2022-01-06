/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:46:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/12 12:55:19 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *res, unsigned int number, long int len)
{
	while (number > 0)
	{
		res[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (res);
}

static long int	ft_len(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*res;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = ft_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!(res))
		return (NULL);
	res[len] = '\0';
	len--;
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		res[0] = '-';
	}
	else
		number = n;
	res = ft_array(res, number, len);
	return (res);
}
