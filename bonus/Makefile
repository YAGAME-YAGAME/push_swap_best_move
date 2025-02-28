CC = cc
CFLAGS = -Wall -Wextra -Werror

MOVES_DIR_BONUS = ./operations/



SRCS_BONUS= ./get_line/get_next_line.c \
		./get_line/get_next_line_utils.c \
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
		./movement_bonus.c \
		./best_move_bonus.c \
		./check_args_bonus.c \
		./check_moves_bonus.c \
		./sort_bonus.c \


OBJS_BONUS = $(SRCS_BONUS:.c=.o)

	
all : $(OBJS_BONUS) ../libft/libft.a
	@$(CC) $(CFLAGS) $(OBJS_BONUS) ../libft/libft.a -o ../checker

%.o: %.c ../include/push_swap_bonus.h ../libft/libft.h 
	@$(CC) $(CFLAGS) -c $< -o $@

../libft/libft.a :
	@make -C ../libft/

clean :
	@rm -rf $(OBJS_BONUS)

fclean : clean
	@rm  -rf ../checker



