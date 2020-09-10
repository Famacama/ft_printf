CC = gcc
EXEC = printf
SRC = $(wildcard *.c)
SRCL = $(wildcard libft/*.c)
OBJ = $(SRC:.c=.o) 
RM = rm -f
	
all : $(EXEC)
	

	
%.o : %.c
	$(CC) -o $@ -c $<

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^ 

clean :
	$(RM) $(OBJ)

fclean : $(clean)
		

