NAME = libft

SRC = *.c

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
		
$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
