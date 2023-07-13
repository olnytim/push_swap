/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:42:19 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/11 21:25:36 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap_bonus.h"

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

int	*ft_array(t_stack *stack, int length)
{
	int		*array;
	t_node	*temp;
	int		i;

	i = 0;
	temp = stack->first;
	array = malloc(sizeof(int) * length);
	while (temp)
	{
		array[i++] = temp->value;
		temp = temp->next;
	}
	return (array);
}

int	*ft_sort_array(int *array, int length)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			++j;
		}
		++i;
	}
	return (array);
}

void	ft_array_compare(t_stack *stack, int *array, int length)
{
	t_node	*temp;
	int		i;

	temp = stack->first;
	while (temp)
	{
		i = 0;
		while (i < length)
		{
			if (temp->value == array[i])
			{
				temp->index = i;
				break ;
			}
			++i;
		}
		temp = temp->next;
	}
	free(array);
}
