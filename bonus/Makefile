CC = cc
CFLAGS = -Wall -Wextra -Werror

MOVES_DIR_BONUS = ./operations/



SRCS_BONUS= ./get/get_next_line.c \
		./get/get_next_line_utils.c \
		$(MOVES_DIR_BONUS)pa_bonus.c \
		$(MOVES_DIR_BONUS)pb_bonus.c \
		$(MOVES_DIR_BONUS)ra_bonus.c \
		$(MOVES_DIR_BONUS)rb_bonus.c \
		$(MOVES_DIR_BONUS)rr_bonus.c \
		$(MOVES_DIR_BONUS)rra_bonus.c \
		$(MOVES_DIR_BONUS)rrb_bonus.c \
		$(MOVES_DIR_BONUS)rrr_bonus.c \
		$(MOVES_DIR_BONUS)sa_bonus.c \
		$(MOVES_DIR_BONUS)sb_bonus.c \
		$(MOVES_DIR_BONUS)ss_bonus.c \
		./push_swap_bonus.c \
		./instructions.c \
		./utils_bonus.c \
		./check_args_bonus.c \
		./check_moves_bonus.c \

RM = rm -rf
NAME = push_swap_bonus.a
HEADER = ../include/push_swap_bonus.h
HEADER_LIBFT = ../libft/libft.h

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

	
all : $(NAME) ../libft/libft.a
	$(CC) $(CFLAGS) $(NAME) ../libft/libft.a -o ../checker

$(NAME) : $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

%.o: %.c $(HEADER) $(HEADER_LIBFT) 
	$(CC) $(CFLAGS) -c $< -o $@

../libft/libft.a :
	make -C ../libft/

clean :
	rm -rf $(OBJS_BONUS)

fclean : clean
	$(RM) ../checker $(NAME)

re : fclean all

.PHONY: all clean fclean re



