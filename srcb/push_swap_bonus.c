/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:18 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/11 22:47:36 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap_bonus.h"

void	ft_error(char *str)
{
	ft_printf(str);
	exit(1);
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

// static void	ft_push_swap(t_stack *a, t_stack *b)
// {
// 	int	i;

// 	i = (int)ft_counter(a);
// 	if (i == 2)
// 		sorting_2(a);
// 	else if (i == 3)
// 		sorting_3(a);
// 	else if (i == 4)
// 		sorting_4(a, b);
// 	else if (i == 5)
// 		sorting_5(a, b);
// 	else
// 	{
// 		ft_butterfly(a, b, i);
// 		ft_push_all(a, b, i);
// 	}
// }

static char	*ft_set_array(char **av)
{
	char	*str;
	int		ac;

	ac = 1;
	str = ft_strdup(av[ac++]);
	while (av[ac])
	{
		str = ft_strjoin_gnl(str, " ");
		str = ft_strjoin_gnl(str, av[ac]);
		++ac;
	}
	return (str);
}

int	main(int ac, char **av)
{
	struct s_stack	*a;
	struct s_stack	*b;
	char			*str;

	if (ac < 2)
		ft_error("Error\nInvalid number of args\n");
	else
	{
		str = ft_set_array(av);
		a = ft_set_stack();
		ft_argchecker(str, a);
		if (!ft_done(a))
			return (0);
		ac = ft_counter(a);
		ft_array_compare(a, ft_sort_array(ft_array(a, ac), ac), ac);
		b = ft_set_stack();
		ft_checker(a, b);
		// ft_push_swap(a, b);
	}
	return (0);
}
