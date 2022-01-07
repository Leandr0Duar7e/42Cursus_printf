/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:44:31 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/07 20:37:12 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
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

static int	ft_eval_format(t_printf *tab, const char *format, int i)
{
	void	var;

	while (!(ft_strchr("csdiupxX%", format[i])))
		i++;
	if (format[i] == 'c')
	{
		var = va_arg(tab->args, int);
		tab->tl += ft_putchar(var, 1);
	}
	if (format[i] == 's')
	{
		var = va_arg(tab->args, char*);
		tab->tl += ft_putstr(var, 1);
	}
	if (format[i] == 'p')

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
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format, i + 1);
		else
			ret += write(1, &format[i], i);
	}
	va_end(tab->args);
	ret += tab->tl;
	free (tab);
	return (ret);
}

int	main()
{
	ft_printf("Ora boas!%c", 'R');
}


