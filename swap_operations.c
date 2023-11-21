/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:20:37 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 13:12:40 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack		*first;
	t_stack		*second;
	int			nbr;
	int			index;

	if (ft_stksize(*stack) < 2)
		return (0);
	first = *stack;
	second = first->next;
	nbr = first->nbr;
	index = first->index;
	first->nbr = second->nbr;
	first->index = second->index;
	second->nbr = nbr;
	second->index = index;
	return (1);
}

int	sa(t_stack **a)
{
	if (ft_swap(a) == 0)
		return (0);
	ft_putendl_fd("sa", 1);
	return (1);
}

int	sb(t_stack **b)
{
	if (ft_swap(b) == 0)
		return (0);
	ft_putendl_fd("sb", 1);
	return (1);
}

int	ss(t_stack **a, t_stack **b)
{
	if (ft_swap(a) == 0 || ft_swap(b) == 0)
		return (0);
	ft_putendl_fd("ss", 1);
	return (1);
}
