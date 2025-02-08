

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS= ./mandatory/push_swap.c ./mandatory/checker.c ./mandatory/moves_p_s.c ./mandatory/index.c


OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


all : $(OBJS)	
	@make -C libft
	@make -C libft bonus
	@make -C ft_printf
	@$(CC) $(CFLAGS) $(SRCS) libft/libft.a ft_printf/libftprintf.a -o ../push_swap

	
clean :
	@make -C libft clean
	@make -C ft_printf clean
	@rm mandatory/*.o

fclean : clean
	# @make -C libft fclean
	# @make -C ft_printf fclean
	@rm -rf libft/libft.a
	@rm -rf ft_printf/libftprintf.a
	@rm push_swap