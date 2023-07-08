/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:25 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/08 23:23:00 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

int	ft_empty_arg(char *str)
{
	while (*str && *str == ' ')
		++str;
	if (*str == '\0')
		return (0);
	return (1);
}

static int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (1);
		++i;
	}
	return (0);
}

static void	ft_doubles(t_stack *stack)
{
	t_node	*temp;
	t_node	*temp2;

	temp = stack->first;
	while (temp)
	{
		temp2 = temp->next;
		while (temp2)
		{
			if (temp->value == temp2->value)
			{
				ft_printf("Double\n");
				exit(1);
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}

void	ft_argchecker(int ac, char *av, t_stack *a)
{
	int		i;
	char	**temp;

	if (ac > 1)
	{
		temp = ft_split(av, ' ');
		i = ac - 1;
		while (temp[i] && i > 0)
		{
			if (ft_isnum(temp[i]) == 1)
				exit(0);
			ft_push(a, ft_atoi(temp[i]));
			--i;
		}
		free(temp);
		ft_doubles(a);
	}
	else
		exit(1);
	return ;
}
