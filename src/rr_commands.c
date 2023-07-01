/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:34:43 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/06/27 18:10:35 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

void	rra(t_stack *stack)
{
	t_node	*a;
	t_node	*b;
	t_node	*c;

	if (ft_empty(stack) || !stack->first->next)
		return ;
	a = stack->first;
	b = stack->first;
	c = stack->first;
	while (b->next->next)
		b = b->next;
	c = b->next;
	c->next = a;
	b->next = NULL;
	stack->first = c;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	t_node	*a;
	t_node	*b;
	t_node	*c;

	if (ft_empty(stack) || !stack->first->next)
		return ;
	a = stack->first;
	b = stack->first;
	c = stack->first;
	while (b->next->next)
		b = b->next;
	c = b->next;
	c->next = a;
	b->next = NULL;
	stack->first = c;
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	ft_printf("rrr\n");
}
