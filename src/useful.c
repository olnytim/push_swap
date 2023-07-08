/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:42:19 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/08 19:48:36 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

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

int	*ft_array(t_stack *stack)
{
	int		*array;
	t_node	*temp;
	int		i;

	i = 0;
	temp = stack->first;
	array = malloc(sizeof(int) * ft_counter(stack));
	while (temp)
	{
		array[i++] = temp->value;
		temp = temp->next;
	}
	return (array);
}

int	*ft_sort_array(t_stack *stack, int *array)
{
	int	i;
	int	j;
	int	temp;
	int	size;

	i = 0;
	size = ft_counter(stack);
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
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

void	ft_array_compare(t_stack *stack, int *array)
{
	t_node	*temp;
	int		i;

	temp = stack->first;
	i = 0;
	while (temp)
	{
		i = 0;
		while (i < ft_counter(stack))
		{
			if (temp->value == array[i])
			{
				temp->index = i;
				break;
			}
			++i;
		}
		temp = temp->next;
	}
	free(array);
}
