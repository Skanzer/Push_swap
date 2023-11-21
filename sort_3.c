/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:02:01 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 17:10:27 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	if_1(t_stack **a)
{
	ra(a);
	sa(a);
	rra(a);
}

static void	if_2(t_stack **a, int index, int min)
{
	if (index == min)
		ra(a);
	else
	{
		sa(a);
		rra(a);
	}
}

void	sort_3(t_stack **a)
{
	t_stack		*first;
	int			min;
	int			next_min;

	first = *a;
	min = get_min(a, -1);
	next_min = get_min(a, min);
	if (ft_sorted(a))
		return ;
	if (first->index == min && first->next->index != next_min)
		if_1(a);
	else if (first->index == next_min)
	{
		if (first->next->index == min)
			sa(a);
		else
			rra(a);
	}
	else
		if_2(a, first->next->index, min);
}
