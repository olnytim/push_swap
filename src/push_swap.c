/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:18 by olnytim           #+#    #+#             */
/*   Updated: 2023/06/20 21:32:20 by tgalyaut         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	struct s_stack	*a;
	struct s_stack	*b;

	a = ft_set_stack();
	b = ft_set_stack();
	argchecker(ac, av, a);
	return (0);
}
