/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:37:07 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/06/27 19:15:52 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

void	sa(t_stack *stack)
{
	t_node	*a;
	t_node	*b;
	t_node	*c;

	if (!ft_empty(stack) && stack->first->next)
	{
		a = stack->first;
		b = stack->first->next;
		c = stack->first->next->next;
		b = c;
		c = a;
		a = b;
	}
	ft_printf("sa\n");
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
	ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	ft_printf("ss\n");
}

void	pa(t_stack *stack1, t_stack *stack2)
{
	int	temp;

	if (ft_empty(stack2))
		return ;
	temp = ft_pop(stack2);
	ft_push(stack1, temp);
	ft_printf("pa\n");
}

void	pb(t_stack *stack1, t_stack *stack2)
{
	int	temp;

	if (ft_empty(stack1))
		return ;
	temp = ft_pop(stack1);
	ft_push(stack2, temp);
	ft_printf("pb\n");
}
