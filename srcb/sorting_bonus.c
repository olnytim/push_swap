/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:01:41 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/11 21:08:48 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap_bonus.h"

void	sorting_2(t_stack *a)
{
	if (a->first->index > a->first->next->index)
		sa(a);
}

void	sorting_3(t_stack *a)
{
	if (a->first->index == 2 && a->first->next->index == 0)
		ra(a);
	else if (a->first->index == 2 && a->first->next->index == 1)
	{
		ra(a);
		sa(a);
	}
	else if (a->first->index == 1 && a->first->next->index == 2)
		rra(a);
	else if (a->first->index == 1 && a->first->next->index == 0)
		sa(a);
	else if (a->first->index == 0 && a->first->next->index == 2)
	{
		sa(a);
		ra(a);
	}
}

void	sorting_4(t_stack *a, t_stack *b)
{
	while (a->first->index != 3)
	{
		if (ft_max_index(a, 4) == 1)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
	sorting_3(a);
	pa(a, b);
	ra(a);
}

static void	sorting_5_1(t_stack *a)
{
	if (a->first->index == 4 && a->first->next->index == 2)
		ra(a);
	else if (a->first->index == 4 && a->first->next->index == 3)
	{
		ra(a);
		sa(a);
	}
	else if (a->first->index == 3 && a->first->next->index == 4)
		rra(a);
	else if (a->first->index == 3 && a->first->next->index == 2)
		sa(a);
	else if (a->first->index == 2 && a->first->next->index == 4)
	{
		sa(a);
		ra(a);
	}
}

void	sorting_5(t_stack *a, t_stack *b)
{
	int	j;
	int	i;

	i = 2;
	j = 0;
	while (j != 2)
	{
		while (a->first->index != i - 1)
		{
			if (ft_max_index(a, i) == 1)
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
		--i;
		++j;
	}
	sorting_5_1(a);
	if (b->first->index < b->first->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}
