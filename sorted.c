/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:22:47 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 16:41:15 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp && tmp->next)
	{
		if (tmp->nbr > tmp->next->nbr)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort_stack(t_stack **a, t_stack **b)
{
	if (ft_stksize(*a) <= 4)
		small_sort(a, b);
	else
		radix_sort(a, b);
}
