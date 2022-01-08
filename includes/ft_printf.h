/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:30:30 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/08 22:01:07 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_printf
{
	va_list	args;
	int		tl;
	int		is_zero;
	int		perc;
}t_printf;

void	ft_dechex(unsigned long long dec, char d);
int	ft_putchar(char c, int fd);
int	ft_putstr(char *s, int fd);
int	ft_countnbr(int nbr);
int	ft_countnbru(unsigned int nbr);
void	ft_putnbrp(unsigned long long nbr);
int	ft_countnbrh(unsigned long long nbr);
void	ft_putnbru(unsigned int nbr);

#endif
