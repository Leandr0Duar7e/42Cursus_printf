#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"
#include "libft.h"

t_printf	*ft_initialize_tab(t_printf *tab)
{
	tab.wdt = 0;
	tab.prc = 0;
	tab.zero = 0;
	tab.pnt = 0;
	tab.sign = 0;
	tab.tl = 0;
	tab.is_zero = 0;
	tab.dash = 0;
	tab.perc = 0;
	tab.sp = 0;
	return (tab);
}

int	ft_eval_format(t_printf *tab, const char *format, int i)
{
	while (!(ft_strchr("csdiupxX%", format[i])))
	{
	}
}

int	ft_printf(const char *format, ...)
{
	t_printf	*tab;

	tab = (t_printf *)malloc(sizeof(t_printf));
	if (!tab)
		return (0);
	ft_initialize_tab(tab);
	va_start(tab.args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format, i + 1);
		else
			ret += write(1, &format[i], 1);
	}
	va_end(tab.args);
	ret += tab.tl;
	free (tab);
	return (ret);
}

int	main()
{
	ft_printf("Ora boas!");
}


