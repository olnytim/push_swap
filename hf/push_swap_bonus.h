/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:02:53 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/11 22:42:39 by tgalyaut         ###   ########.fr       */
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
	int				index;
}					t_node;

typedef struct s_stack
{
	struct s_node	*first;
}					t_stack;

void			ft_argchecker(char *av, t_stack *a);
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
void			ft_push(struct s_stack *stack, int content, int index);
void			sorting_2(t_stack *a);
void			sorting_3(t_stack *a);
void			sorting_4(t_stack *a, t_stack *b);
void			sorting_5(t_stack *a, t_stack *b);
void			ft_butterfly(t_stack *a, t_stack *b, int i);
void			ft_push_all(t_stack *a, t_stack *b, int i);
void			ft_array_compare(t_stack *stack, int *array, int length);
void			ft_error(char *str);
void			ft_checker(t_stack *a, t_stack *b);

int				ft_first(struct s_stack *stack);
int				ft_empty(struct s_stack *stack);
int				ft_counter(t_stack *a);
int				*ft_array(t_stack *stack, int length);
int				*ft_sort_array(int *array, int length);
int				ft_empty_arg(char *str);
int				ft_max_index(t_stack *stack, int i);
int				ft_done(t_stack *a);

t_node			ft_pop(struct s_stack *stack);
t_stack			*ft_set_stack(void);

#endif
