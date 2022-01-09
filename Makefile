# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbuny-fe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 19:59:53 by jbuny-fe          #+#    #+#              #
#    Updated: 2022/01/09 13:56:39 by leolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
LIBFT       = ./libft/libft.a
NAME        = libftprintf.a
HEADER      = ft_printf.h
INCLUDES	= -Idouble_lst -I./includes
FLAGS      	= -Wall -Wextra -Werror -g
RM          = rm -f

SRCS        = ft_printf.c\
			  srcs/ft_dechex.c srcs/ft_countnbru.c srcs/ft_putchar.c\
			  srcs/ft_putstr.c srcs/ft_countnbr.c\
			  srcs/ft_countnbrh.c srcs/ft_putnbru.c

		
OBJS        = $(SRCS:.c=.o)

all:		$(NAME)

%.o: %.c
	@gcc $(FLAGS) $(INCLUDES) -c -o $@ $<

$(NAME): $(OBJS) $(GNL_O)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	@ar -rs $(NAME) $(OBJS) $(BONUS_O) $(OBJS_DLST) $(GNL_O)

.c.o:
			gcc $(FLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)

clean:		
			$(MAKE) clean -C ./libft
			$(RM) $(OBJS) $(GNL_O)

fclean:		clean
			$(MAKE) fclean -C ./libft
			$(RM) $(NAME)

re:			fclean all

norm:
	norminette ${SRCS}

.PHONY:		all clean fclean re norm
