CC = cc
# CFLAGS = -Wall -Wextra -Werror

MOVES_DIR = ./operations/

SRCS= 	push_swap.c \
		check_args.c \
		utils.c \
		check_moves.c \
		sort.c \
		print_stack.c \
		best_move.c \
		movement.c \
		$(MOVES_DIR)sa.c 	$(MOVES_DIR)sb.c \
		$(MOVES_DIR)pa.c 	$(MOVES_DIR)pb.c \
		$(MOVES_DIR)rra.c 	$(MOVES_DIR)rrb.c \
		$(MOVES_DIR)ra.c 	$(MOVES_DIR)rb.c \
		$(MOVES_DIR)rr.c 	$(MOVES_DIR)rrr.c \
		$(MOVES_DIR)ss.c \

OBJS = $(SRCS:.c=.o)

all : $(OBJS) ../libft/libft.a
	@$(CC) $(CFLAGS) $(OBJS) ../libft/libft.a  -o ../push_swap

%.o: %.c  ../include/push_swap.h ../libft/libft.h 
	@$(CC) $(CFLAGS) -c $< -o $@

../libft/libft.a :
	@make -C ../libft/

clean :
	@rm -rf  $(OBJS)

fclean : clean
	@rm -rf ../push_swap

re : fclean all

