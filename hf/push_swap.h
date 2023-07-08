/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:02:53 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/08 19:51:28 by tgalyaut         ###   ########.fr       */
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
	size_t			index;
}					t_node;

typedef struct s_stack
{
	struct s_node	*first;
}					t_stack;

void			ft_argchecker(int ac, char *av, t_stack *a);
void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack1, t_stack *stack2);
void			pa(t_stack *stack1, t_stack *stack2);
void			pb(t_stack *stack1, t_stack *stack2);
void			ra(t_stack *stack);
void			rb(t_stack *stack);
void			rr(t_stack *a, t_stack *b);
void			rra(t_stack *stack);
void			rrb(t_stack *stack);
void			rrr(t_stack *a, t_stack *b);
void			ft_push(struct s_stack *stack, int content);
void			sorting_2(t_stack *a);
void			ft_array_compare(t_stack *stack, int *array);

int				ft_first(struct s_stack *stack);
int				ft_pop(struct s_stack *stack);
int				ft_empty(struct s_stack *stack);
int				ft_done(t_stack *a);
int				ft_counter(t_stack *a);
int				*ft_array(t_stack *stack);
int				*ft_sort_array(t_stack *stack, int *array);
int				ft_empty_arg(char *str);

t_stack			*ft_set_stack(void);

#endif
