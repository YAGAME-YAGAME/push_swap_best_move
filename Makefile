

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS= ./mandatory/push_swap.c ./mandatory/checker.c ./mandatory/moves_p_s.c ./mandatory/index.c ./mandatory/utils.c


OBJS = $(SRCS:.c=.o)

%.o: %.c ./include/push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@


all : $(OBJS)	
	@make -C libft
	@make -C libft bonus
	@make -C ft_printf
	$(CC) $(CFLAGS) $(SRCS) -Llibft -Lft_printf libft/libft.a  ft_printf/libftprintf.a libft/ft_lstadd_back_bonus.c  libft/ft_lstnew_bonus.c libft/ft_lstsize_bonus.c -o push_swap
	
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