/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:25 by olnytim           #+#    #+#             */
/*   Updated: 2023/06/20 21:53:39 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

int	ft_fail(char *str, int arg)
{
	ft_printf("%s, %d\n", str, arg);
	exit(1);
}

int	ft_fail2(char *str, int arg)
{
	ft_printf("%s, %d\n", str, arg);
	exit(0);
}

int	ft_suc(char *str)
{
	ft_printf("%s\n", str);
	return (1);
}

void	argchecker(int ac, char **av, t_stack *a)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			if (ft_isnum(av[i]) == 1)
				ft_fail2("Error!\nInvalid number of args", i);
			ft_push(a, ft_atoi(av[i]));
			++i;
		}
	}
	else
		ft_fail("Error!\nThe invalid number of args", -1);
	ft_suc("Everything is alright!\nThis is the end");
}
