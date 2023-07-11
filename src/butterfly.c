/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:30:40 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/04 18:30:41 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

int	ft_max_index(t_stack *stack, size_t i)
{
	t_node	*temp;

	temp = stack->first;
	while (temp->index)
	{
		if (temp->index == i - 1)
			return (1);
		temp = temp->next;
	}
	return (0);
}

size_t	ft_range(size_t i)
{
	size_t	j;

	j = 1;
	while (j * j < i * 2)
		++j;
	return (j);
}

void	ft_butterfly(t_stack *a, t_stack *b, size_t i)
{
	size_t	j;
	size_t	range;

	range = ft_range(i);
	j = 0;
	while (a->first && j < i)
	{
		if (a->first->index <= j)
		{
			pb(a, b);
			rb(b);
			++j;
		}
		else if (a->first->index <= j + range)
		{
			pb(a, b);
			++j;
		}
		else
			ra(a);
	}
}

void	ft_push_all(t_stack *a, t_stack *b, size_t	i)
{
	while (i > 0)
	{
		while (b->first->index != i - 1)
		{
			if (ft_max_index(b, i) == 1)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
		--i;
	}
}
