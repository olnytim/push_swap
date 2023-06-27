/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:42:19 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/06/27 20:26:21 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

t_comp	*ft_set_values(void)
{
	struct s_comp	*value;

	value = malloc(sizeof(struct s_comp));
	value->half = 0;
	value->max = 0;
	value->min = 0;
	return (value);
}

int	ft_counter(t_stack *a)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = a->first;
	while (temp)
	{
		++i;
		temp = temp->next;
	}
	return (i);
}

void	sa_ra(t_stack *a)
{
	sa(a);
	ra(a);
}
