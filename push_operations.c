/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:30:37 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 14:07:14 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*first_to;
	t_stack	*first_from;
	t_stack	*tmp;

	if (ft_stksize(*stack_from) == 0)
		return (0);
	first_from = *stack_from;
	first_to = *stack_to;
	tmp = first_from;
	first_from = first_from->next;
	*stack_from = first_from;
	if (!first_to)
	{
		first_to = tmp;
		first_to->next = NULL;
		*stack_to = first_to;
	}
	else
	{
		tmp->next = first_to;
		*stack_to = tmp;
	}
	return (1);
}

int	pa(t_stack **a, t_stack **b)
{
	if (ft_push(a, b) == 0)
		return (0);
	ft_putendl_fd("pa", 1);
	return (1);
}

int	pb(t_stack **b, t_stack **a)
{
	if (ft_push(b, a) == 0)
		return (0);
	ft_putendl_fd("pb", 1);
	return (1);
}
