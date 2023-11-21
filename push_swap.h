/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:30:35 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 16:34:46 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;
}	t_stack;

void		ft_error(int argc, char **values);
void		free_double(char **tmp);
void		free_stack(t_stack **stack);
void		op_error(void);

t_stack		*ft_stklast(t_stack *stack);
t_stack		*ft_stknew(int nbr);
int			ft_stksize(t_stack *stack);
int			ft_stkmin(t_stack *stack);
int			ft_stkmax(t_stack *stack);
int			ft_index(t_stack *stack, int nbr);
void		put_index(t_stack **stack);
int			get_distance(t_stack **stack, int index);
int			get_min(t_stack **stack, int value);
void		print_stack(t_stack *first);

int			is_number(char *value);
int			ft_duplicate(long value, char **values, int i);
long		ft_atoi2(const char *str);

int			ft_sorted(t_stack **stack);

int			ft_swap(t_stack **stack);
int			ss(t_stack **a, t_stack **b);
int			sb(t_stack **b);
int			sa(t_stack **a);

int			ft_rotate(t_stack **stack);
int			rr(t_stack **a, t_stack **b);
int			rb(t_stack **b);
int			ra(t_stack **a);

int			ft_push(t_stack **stack_to, t_stack **stack_from);
int			pa(t_stack **a, t_stack **b);
int			pb(t_stack **b, t_stack **a);

int			ft_revrotate(t_stack **stack);
int			rrr(t_stack **a, t_stack **b);
int			rrb(t_stack **b);
int			rra(t_stack **a);

void		sort_stack(t_stack **a, t_stack **b);
void		radix_sort(t_stack **a, t_stack **b);
void		small_sort(t_stack **a, t_stack **b);
void		sort_3(t_stack **a);
void		sort_4(t_stack **a, t_stack **b);

#endif