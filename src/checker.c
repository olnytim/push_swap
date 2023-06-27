/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:31:23 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/06/27 20:17:11 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

int	ft_numindex(t_stack *a, int min)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = a->first;
	while (temp)
	{
		if (temp->value == min)
			return (i + 1);
		++i;
		temp = temp->next;
	}
	return (-1);
}

int	ft_min(t_stack *a)
{
	t_node	*temp;
	int		min;

	temp = a->first;
	min = temp->value;
	while (temp)
	{
		if (temp->value < min)
			min = temp->value;
		temp = temp->next;
	}
	return (min);
}

int	ft_max(t_stack *a)
{
	t_node	*temp;
	int		max;

	max = 0;
	temp = a->first;
	while (temp)
	{
		if (temp->value > max)
			max = temp->value;
		temp = temp->next;
	}
	return (max);
}

int	ft_half(t_stack *a, t_comp *value)
{
	t_node	*temp;
	int		half;

	temp = a->first;
	half = temp->value;
	while (temp)
	{
		if (temp->value != value->min && temp->value != value->max)
			half = temp->value;
		temp = temp->next;
	}
	return (half);
}

void	ft_give_values(t_stack *a, t_comp *value)
{
	value->min = ft_min(a);
	value->max = ft_max(a);
	value->half = ft_half(a, value);
}
