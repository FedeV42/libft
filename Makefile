NAME = libft.a

OBJS = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memset.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_toupper.o ft_tolower.o

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}
		
%.o: %.c
	gcc ${CFLAGS} -c  $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
