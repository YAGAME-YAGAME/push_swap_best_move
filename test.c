void	set_min_target(t_list **stack_a, t_list **node)
{
	t_list	*tmp;
	t_list	*small;

	tmp = *stack_a;
	small = *stack_a;
	while (tmp)
	{
		if (small->data > tmp->data)
			small = tmp;
		tmp = tmp->next;
	}
	(*node)->target = small;
}

void	set_target(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_b;
	t_list	*tmp_a;

	tmp_b = *stack_b;
	tmp_a = *stack_a;
	while (tmp_b)
	{
		tmp_b->target = tmp_a;
		while (tmp_a)
		{
			if (tmp_a->data > tmp_b->data)
			{
				if (tmp_b->data > tmp_b->target->data
					|| tmp_a->data < tmp_b->target->data)
					tmp_b->target = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		if (tmp_b->data > tmp_b->target->data)
			set_min_target(stack_a, &tmp_b);
		tmp_a = *stack_a;
		tmp_b = tmp_b->next;
	}
}