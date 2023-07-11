/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:30:42 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/11 21:09:13 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

int	ft_empty(struct s_stack *stack)
{
	if (!stack->first)
		return (1);
	return (0);
}

void	ft_push(struct s_stack *stack, int content, int index)
{
	struct s_node	*new;

	new = malloc(sizeof(struct s_node));
	new->value = content;
	new->next = stack->first;
	new->index = index;
	stack->first = new;
}

t_node	ft_pop(struct s_stack *stack)
{
	struct s_node	*temp;
	struct s_node	result;

	result = (*stack->first);
	temp = stack->first;
	stack->first = stack->first->next;
	free(temp);
	return (result);
}

int	ft_first(struct s_stack *stack)
{
	if (ft_empty(stack))
		return (-1);
	return (stack->first->value);
}

t_stack	*ft_set_stack(void)
{
	struct s_stack	*new;

	new = malloc(sizeof(struct s_stack));
	new->first = NULL;
	return (new);
}
