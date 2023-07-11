/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:18 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/08 22:38:16 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"
#include <stdio.h>

void	ft_print(struct s_stack *stack)
{
	t_node	*temp;

	temp = stack->first;
	while (temp)
	{
		ft_printf("Number is: %d index[%d]\n", temp->value, temp->index);
		temp = temp->next;
	}
}

int	ft_done(t_stack *a)
{
	t_node	*temp;

	temp = a->first;
	while (temp && temp->next)
	{
		if (temp->value > temp->next->value)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	ft_push_swap(t_stack *a, t_stack *b)
{
	size_t	i;

	i = (size_t)ft_counter(a);
	if (i == 2)
		sorting_2(a);
	else if (i == 3)
		sorting_3(a);
	else if (i == 4)
		sorting_4(a, b);
	else if (i == 5)
		sorting_5(a, b);
	else
	{
		ft_butterfly(a, b, i);
		ft_push_all(a, b, i);
	}
}

int	main(int ac, char **av)
{
	struct s_stack	*a;
	struct s_stack	*b;
	char			*str;

	ac = 1;
	str = ft_strdup(av[ac++]);
	while (av[ac])
	{
		str = ft_strjoin_gnl(str, " ");
		str = ft_strjoin_gnl(str, av[ac]);
		++ac;
	}
	// ft_printf("%s\n", str);
	a = ft_set_stack();
	ft_argchecker(ac, str, a);
	if (!ft_done(a))
		return (0);
	ft_array_compare(a, ft_sort_array(a, ft_array(a)));
	b = ft_set_stack();
	ft_push_swap(a, b);
	// ft_printf("------------\n");
	// ft_print(a);
	// system("leaks push_swap");
	return (0);
}


// 3 -8 9 10 -10 11