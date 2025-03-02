


all: mandatoty

mandatoty:
	# @make -C libft
	@make -C ./mandatory/

bonus: bs

bs:
	# @make -C libft
	@make -C bonus

clean:
	@make -C ./libft/ clean
	@make -C ./mandatory/ clean
	@make -C ./bonus/ clean

fclean:
	@make -C ./libft/ fclean
	@make -C ./mandatory/ fclean
	@make -C ./bonus/ fclean

re: fclean all