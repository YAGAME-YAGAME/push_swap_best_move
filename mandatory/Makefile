CC = cc
CFLAGS = -Wall -Wextra -Werror

MOVES_DIR = ./operations/

SRCS= 	push_swap.c \
		check_args.c \
		utils.c \
		check_moves.c \
		sort.c \
		best_move.c \
		best_move_utils.c \
		movement.c \
		$(MOVES_DIR)sa.c 	$(MOVES_DIR)sb.c \
		$(MOVES_DIR)pa.c 	$(MOVES_DIR)pb.c \
		$(MOVES_DIR)rra.c 	$(MOVES_DIR)rrb.c \
		$(MOVES_DIR)ra.c 	$(MOVES_DIR)rb.c \
		$(MOVES_DIR)rr.c 	$(MOVES_DIR)rrr.c \
		$(MOVES_DIR)ss.c \

RM = rm -rf
NAME = push_swap.a
HEADER = ../include/push_swap.h
HEADER_LIBFT = ../libft/libft.h

OBJS = $(SRCS:.c=.o)

all : push_swap

push_swap : $(NAME) ../libft/libft.a
	${CC} ${CFLAGS} $(NAME) ../libft/libft.a -o ../push_swap

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c  %(HEADER) $(HEADER_LIBFT)
	$(CC) $(CFLAGS) -c $< -o $@

../libft/libft.a :
	make -C ../libft/

clean :
	$(RM)  $(OBJS)

fclean : clean
	$(RM) ../push_swap $(NAME)

re : fclean all

.PHONY: all clean fclean re