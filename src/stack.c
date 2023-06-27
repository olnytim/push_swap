/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:30:42 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/06/27 19:05:18 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

int	ft_empty(struct s_stack *stack)
{
	if (!stack->first)
		return (1);
	return (0);
}

void	ft_push(struct s_stack *stack, int content)
{
	struct s_node	*new;

	new = malloc(sizeof(struct s_node));
	new->value = content;
	new->next = stack->first;
	stack->first = new;
}

int	ft_pop(struct s_stack *stack)
{
	int				pop;
	struct s_node	*temp;

	if (ft_empty(stack))
		return (-1);
	pop = stack->first->value;
	temp = stack->first;
	stack->first = stack->first->next;
	free(temp);
	return (pop);
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
