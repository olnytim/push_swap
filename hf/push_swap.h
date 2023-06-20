/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:02:53 by olnytim           #+#    #+#             */
/*   Updated: 2023/06/20 21:54:15 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	struct s_node	*first;
}					t_stack;

typedef struct s_comp
{
	int	min;
	int	max;
	int	mid;
}				t_comp;

void			argchecker(int ac, char **av, t_stack *a);
void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack);
void			pa(t_stack *stack1, t_stack *stack2);
void			pb(t_stack *stack1, t_stack *stack2);
void			ft_push(struct s_stack *stack, int content);

int				ft_first(struct s_stack *stack);
int				ft_pop(struct s_stack *stack);
int				ft_empty(struct s_stack *stack);
int				ft_isnum(char *str);

struct s_stack	*ft_set_stack(void);

#endif
