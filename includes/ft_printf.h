
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

struct t_printf
{
	va_list	args;
	int	wdt;
	int	prc;
	int	zero;
	int	pnt;
	int	dash;
	int	tl;
	int	sign;
	int	is_zero;
	int	perc;
	int	sp;
}

#endif
