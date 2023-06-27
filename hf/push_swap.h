/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:02:53 by olnytim           #+#    #+#             */
/*   Updated: 2023/06/27 21:02:47 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
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
	int	half;
}				t_comp;

void			argchecker(int ac, char **av, t_stack *a);
void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack);
void			pa(t_stack *stack1, t_stack *stack2);
void			pb(t_stack *stack1, t_stack *stack2);
void			ra(t_stack *stack);
void			rb(t_stack *stack);
void			rr(t_stack *a, t_stack *b);
void			rra(t_stack *stack);
void			rrb(t_stack *stack);
void			rrr(t_stack *a, t_stack *b);
void			sa_ra(t_stack *a);
void			ft_push(struct s_stack *stack, int content);
void			ft_give_values(t_stack *a, t_comp *value);
void			sorting_0(t_stack *a);
void			sorting_1(t_stack *a);
void			sorting_2(t_stack *a, t_stack *b);
void			ft_print(struct s_stack *stack);

int				ft_first(struct s_stack *stack);
int				ft_pop(struct s_stack *stack);
int				ft_empty(struct s_stack *stack);
int				ft_isnum(char *str);
int				ft_done(t_stack *a);
int				ft_counter(t_stack *a);
int				ft_min(t_stack *a);
int				ft_max(t_stack *a);
int				ft_half(t_stack *a, t_comp *value);
int				ft_numindex(t_stack *a, int min);

t_stack			*ft_set_stack(void);
t_comp			*ft_set_values(void);

#endif
