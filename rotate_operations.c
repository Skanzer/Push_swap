/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:13:02 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 16:37:45 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_stksize(*stack) < 2)
		return (0);
	first = *stack;
	last = ft_stklast(*stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
	return (1);
}

int	ra(t_stack **a)
{
	if (ft_rotate(a) == 0)
		return (0);
	ft_putendl_fd("ra", 1);
	return (1);
}

int	rb(t_stack **b)
{
	if (ft_rotate(b) == 0)
		return (0);
	ft_putendl_fd("rb", 1);
	return (1);
}

int	rr(t_stack **a, t_stack **b)
{
	if (ft_rotate(a) == 0 || ft_rotate(b) == 0)
		return (0);
	ft_putendl_fd("rr", 1);
	return (1);
}
