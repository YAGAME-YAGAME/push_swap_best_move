NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =  ft_putstr.c  ft_putchar.c  ft_puthexa.c ft_putnbr.c  ft_printf.c

HEADER = head.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)


.o: .c $(HEADER)
	$(cc) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
