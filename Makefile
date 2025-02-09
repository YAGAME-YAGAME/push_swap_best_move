

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS= ./mandatory/push_swap.c \
		./mandatory/checker.c \
		./mandatory/moves_p_s.c \
		./mandatory/index.c \
		./mandatory/utils.c \
		./mandatory/check_moves.c \

OBJS = $(SRCS:.c=.o)

all : $(OBJS) ./libft/libft.a ./ft_printf/libftprintf.a
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a  ./ft_printf/libftprintf.a -o push_swap

%.o: %.c ./include/push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@make -C libft clean
	@make -C ft_printf clean
	@rm -rf $(OBJS)

fclean : clean
	@make -C libft fclean
	@make -C ft_printf fclean
	@rm push_swap

./libft/libft.a :
	@make -C libft

./ft_printf/libftprintf.a :
	@make -C ft_printf
