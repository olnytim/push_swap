/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:25 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/11 22:41:15 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap_bonus.h"

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
	if (str[i] == '-')
		++i;
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
				ft_error("Error\nDouble\n");
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}

static int	ft_push_atoi(const char *str)
{
	int		i;
	int		n;
	long	l;

	i = 0;
	l = 0;
	n = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		l = (l * 10) + (str[i] - 48);
		i++;
		if (!(l * n >= -2147483648 && l * n <= 2147483647))
			ft_error("Error\nInvalid number\n");
	}
	return (l * n);
}

void	ft_argchecker(char *av, t_stack *a)
{
	int		i;
	char	**temp;

	i = 0;
	temp = ft_split(av, ' ');
	while (temp[i])
		++i;
	--i;
	while (i >= 0 && temp[i])
	{
		if (ft_isnum(temp[i]) == 1)
			ft_error("Error\nArgument is not a valid number\n");
		ft_push(a, ft_push_atoi(temp[i]), -1);
		free(temp[i]);
		--i;
	}
	free(temp);
	ft_doubles(a);
}
