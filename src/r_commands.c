/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:56:05 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/04 16:59:48 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

void	ra(t_stack *stack)
{
	t_node	*temp1;
	t_node	*temp2;

	if (ft_empty(stack) || stack->first->next == NULL)
		return ;
	temp1 = stack->first;
	temp2 = stack->first;
	stack->first = stack->first->next;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp2;
	temp2->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	t_node	*temp1;
	t_node	*temp2;

	if (ft_empty(stack) || !stack->first->next)
		return ;
	temp1 = stack->first;
	temp2 = stack->first;
	stack->first = stack->first->next;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp2;
	temp2->next = NULL;
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}
