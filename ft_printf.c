/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:44:31 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/09 13:56:27 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "includes/ft_printf.h"

static t_printf	*ft_initialize_tab(t_printf *tab)
{
	tab->tl = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	return (tab);
}

static int	ft_eval_format2(t_printf *tab, const char *format, int i)
{
	unsigned int	var2;
	unsigned long	var3;

	if (format[i] == 'p')
	{
		var3 = va_arg(tab->args, unsigned long);
		tab->tl += ft_countnbrh(var3);
		ft_dechex(var3, 'x');
	}
	else if (format[i] == 'u')
	{
		var2 = va_arg(tab->args, unsigned int);
		tab->tl += ft_countnbru(var2);
		ft_putnbru(var2);
	}
	else if (format[i] == 'x' || format[i] == 'X')
	{
		var2 = va_arg(tab->args, unsigned int);
		tab->tl += ft_countnbrh(var2);
		ft_dechex(var2, format[i]);
	}
	return (i);
}

static int	ft_eval_format(t_printf *tab, const char *format, int i)
{
	char			*var1;
	int				var;

	while (!(ft_strchr("csdiupxX%", format[i])))
		i++;
	if (format[i] == 'c')
	{
		var = va_arg(tab->args, int);
		tab->tl += ft_putchar(var, 1);
	}
	else if (format[i] == 's')
	{
		var1 = va_arg(tab->args, char *);
		tab->tl += ft_putstr(var1, 1);
	}
	else if (format[i] == 'd' || format[i] == 'i')
	{
		var = va_arg(tab->args, int);
		tab->tl += ft_countnbr(var);
		ft_putnbr_fd(var, 1);
	}
	else
		return (ft_eval_format2(tab, format, i));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	t_printf	*tab;
	int			i;
	int			ret;

	tab = (t_printf *)malloc(sizeof(t_printf));
	if (!tab)
		return (0);
	ft_initialize_tab(tab);
	va_start(tab->args, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format, i + 1);
		else
			ret += write(1, &format[i], 1);
		i++;
	}
	va_end(tab->args);
	ret += tab->tl;
	free (tab);
	return (ret);
}
/*
int	main()
{
	int res;

	res = ft_printf("Ora boas!%x", 845345245);
	printf("\n%d", res);
}
*/
