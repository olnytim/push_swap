/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:18 by olnytim           #+#    #+#             */
/*   Updated: 2023/06/27 20:56:12 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

void	ft_print(struct s_stack *stack)
{
	while (stack->first)
	{
		ft_printf("%d\n", stack->first->value);
		stack->first = stack->first->next;
	}
}

int	ft_done(t_stack *a)
{
	t_node	*temp;

	temp = a->first;
	while (temp && temp->next)
	{
		if (temp->value > temp->next->value)
			return (1);
		temp = temp->next;
	}
	ft_print(a);
	return (0);
}

int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (1);
		++i;
	}
	return (0);
}

void	ft_push_swap(t_stack *a, t_stack *b)
{
	if (ft_counter(a) < 3)
		sorting_0(a);
	else if (ft_counter(a) == 3)
		sorting_1(a);
	else if (ft_counter(a) > 5)
		sorting_2(a, b);
}

int	main(int ac, char **av)
{
	struct s_stack	*a;
	struct s_stack	*b;

	a = ft_set_stack();
	argchecker(ac, av, a);
	if (!ft_done(a))
		return (0);
	b = ft_set_stack();
	ft_push_swap(a, b);
	ft_print(a);
	ft_print(b);
	system("curl parrot.live");
	return (0);
}
