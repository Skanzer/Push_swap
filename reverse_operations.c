/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:10:06 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 14:30:47 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_revrotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_stksize(*stack) < 2)
		return (0);
	first = *stack;
	last = ft_stklast(*stack);
	while (first)
	{
		if (first->next->next == NULL)
		{
			first->next = NULL;
			break ;
		}
		first = first->next;
	}
	last->next = *stack;
	*stack = last;
	return (1);
}

int	rra(t_stack **a)
{
	if (ft_revrotate(a) == 0)
		return (0);
	ft_putendl_fd("rra", 1);
	return (1);
}

int	rrb(t_stack **b)
{
	if (ft_revrotate(b) == 0)
		return (0);
	ft_putendl_fd("rrb", 1);
	return (1);
}

int	rrr(t_stack **a, t_stack **b)
{
	if (ft_revrotate(a) == 0 || ft_revrotate(b) == 0)
		return (0);
	ft_putendl_fd("rra", 1);
	return (1);
}
