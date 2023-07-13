/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:37:07 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/11 21:08:59 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap_bonus.h"

void	sa(t_stack *stack)
{
	t_node	*a;
	t_node	*b;

	if (!ft_empty(stack) && stack->first->next)
	{
		a = stack->first;
		b = stack->first->next;
		a->next = b->next;
		b->next = a;
		stack->first = b;
	}
}

void	sb(t_stack *stack)
{
	t_node	*a;
	t_node	*b;

	if (!ft_empty(stack) && stack->first->next)
	{
		a = stack->first;
		b = stack->first->next;
		a->next = b->next;
		b->next = a;
		stack->first = b;
	}
}

void	ss(t_stack *stack1, t_stack *stack2)
{
	sa(stack1);
	sb(stack2);
}

void	pa(t_stack *stack1, t_stack *stack2)
{
	t_node	result;

	if (ft_empty(stack2))
		return ;
	result = ft_pop(stack2);
	ft_push(stack1, result.value, result.index);
}

void	pb(t_stack *stack1, t_stack *stack2)
{
	t_node	result;

	if (ft_empty(stack1))
		return ;
	result = ft_pop(stack1);
	ft_push(stack2, result.value, result.index);
}
