# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: famacama <famacama@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 10:02:09 by famacama          #+#    #+#              #
#    Updated: 2020/10/09 12:35:45 by famacama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a
SRCS = 	ft_printf.c \
		printf_100.c \
		printf_c.c \
		printf_d.c \
		printf_i.c \
		printf_p.c \
		printf_s.c \
		printf_u.c \
		printf_x.c \
		printf_m_x.c \
		l_value.c \
		ft_strlen.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		printf_utils.c \

OBJS		= $(SRCS:.c=.o)
RM			= rm -f
LIBC		= ar rc
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)/
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

fclean : clean
	$(RM) $(NAME) $(bonus)
	make fclean -C $(LIBFT)

clean :
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re : fclean all

bonus : all

.PHONY: all clean fclean re bonus .c.o