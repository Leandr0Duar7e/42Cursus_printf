/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:30:30 by leolivei          #+#    #+#             */
/*   Updated: 2022/01/07 19:11:00 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"

typedef struct s_printf
{
	va_list	args;
	int	tl;
	int	is_zero;
	int	perc;
} t_printf;

int	ft_dechex(int dec, char d);
int	ft_putchar(char c, int fd);

#endif
