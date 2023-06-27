/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:01:41 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/06/27 21:03:22 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

void	sorting_0(t_stack *a)
{
	if (a->first->value > a->first->next->value)
		sa(a);
	ft_print(a);
}

void	sorting_1(t_stack *a)
{
	t_comp	*value;

	value = ft_set_values();
	ft_give_values(a, value);
	if (a->first->value == value->min && a->first->next->value == value->max)
		sa_ra(a);
	else if (a->first->value == value->half)
	{
		if (a->first->next->value == value->min)
			sa(a);
		else
			rra(a);
	}
	else if (a->first->value == value->max)
	{
		if (a->first->next->value == value->half)
			sa_ra(a);
		else
			ra(a);
	}
	free(value);
}


void	sorting_2(t_stack *a, t_stack *b)
{
	int	min;
	int	index;

	while (a->first)
	{
		min = ft_min(a);
		index = ft_numindex(a, min);
		if (index < (ft_counter(a) / 2 + 1))
		{
			while (index > 1)
			{
				ra(a);
				--index;
			}
		}
		else
		{
			while (index != ft_counter(a) + 1)
			{
				rra(a);
				++index;
			}
		}
		pb(a, b);
	}
	while (!ft_empty(b))
		pa(a, b);
}