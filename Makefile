

CC = cc
CFLAGS = -Wall -Wextra -Werror

MOVES_DIR = ./mandatory/operations/

SRCS= ./mandatory/push_swap.c \
		./mandatory/checker.c \
		./mandatory/index.c \
		./mandatory/utils.c \
		./mandatory/check_moves.c \
		./mandatory/sort.c \
		./mandatory/print_stack.c \
		./mandatory/best_move.c \
		$(MOVES_DIR)sa.c 	$(MOVES_DIR)sb.c \
		$(MOVES_DIR)pa.c 	$(MOVES_DIR)pb.c \
		$(MOVES_DIR)rra.c 	$(MOVES_DIR)rrb.c \
		$(MOVES_DIR)ra.c 	$(MOVES_DIR)rb.c \
		$(MOVES_DIR)rr.c 	$(MOVES_DIR)rrr.c \
		$(MOVES_DIR)ss.c \

OBJS = $(SRCS:.c=.o)

all : $(OBJS) ./libft/libft.a ./ft_printf/libftprintf.a
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a  ./ft_printf/libftprintf.a -o push_swap

%.o: %.c ./include/push_swap.h libft/libft.h ft_printf/ft_printf.h
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
