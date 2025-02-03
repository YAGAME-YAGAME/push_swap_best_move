


all :	
	@make -C libft
	@make -C ft_printf

clean :
	@make -C libft clean
	@make -C ft_printf clean

fclean :
	@make -C libft fclean
	@make -C ft_printf fclean