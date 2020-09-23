.PHONY: all clean fclean re
NAME = libftprintf.a
CC = gcc
LIB = libft/libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = 	ft_printf.c \
		printf_100.c \
		printf_c.c \
		printf_d.c \
		printf_i.c \
		printf_p.c \
		printf_s.c \
		printf_u.c \
		printf_x.c \
		printf_xX.c \
		l_value.c \
		ft_strlen.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		main.c

O = 	ft_printf.o \
		printf_100.o \
		printf_c.o \
		printf_d.o \
		printf_i.o \
		printf_p.o \
		printf_s.o \
		printf_u.o \
		printf_x.o \
		printf_xX.o \
		l_value.o \
		ft_strlen.o \
		ft_putstr_fd.o \
		ft_putchar_fd.o \
		ft_putnbr_fd.o \
		main.o

all: $(NAME)
$(NAME):
	@make -C ./libft
	cp $(LIB) ./$(NAME)
	@$(CC) $(CFLAGS) -c $(SRC) -I /.
	@ar rc $(NAME) $(O)
	@ranlib $(NAME)
clean:
	@make -C ./libft/ fclean
	@/bin/rm -rf $(O)
fclean: clean
	@/bin/rm -rf $(NAME)
re: fclean all
