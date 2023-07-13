#include "../hf/push_swap_bonus.h"

static void	ft_input(t_stack *a, t_stack *b, char *str)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(a);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(b);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(a, b);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(a);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(b);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(a, b);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(a);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(b);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(a, b);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(a, b);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(a, b);
	else
		ft_error("Error\n");
}

void	ft_checker(t_stack *a, t_stack *b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break;
		ft_input(a, b, str);
		free(str);
	}
	if (!ft_done(a) && !b->first)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	exit(0);
}
