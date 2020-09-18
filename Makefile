CC = gcc
LIBFT       = libft
LIBFT_LIB   = libft.a
EXEC = printf
SRC = $(wildcard *.c)
SRCL = $(wildcard libft/*.c)
OBJ = $(SRC:.c=.o) 
RM = rm -f
LIBC        = ar rc
CFLAGS      = -Wall -Wextra -Werror
	
all : $(EXEC)
	

	
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(EXEC) : $(OBJ)
	make all -C $(LIBFT)/
	cp $(LIBFT)/$(LIBFT_LIB) $(EXEC)
	$(LIBC) $(EXEC) $(OBJ) 

clean :
	$(RM) $(OBJ)

fclean : $(clean)
		