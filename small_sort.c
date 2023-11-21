/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:15:11 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 17:46:16 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_stack **a, t_stack **b)
{
	int	distance;

	if (ft_sorted(a))
		return ;
	distance = get_distance(a, get_min(a, -1));
	if (distance == 1)
		ra(a);
	else if (distance == 2)
	{
		ra(a);
		ra(a);
	}
	else if (distance == 3)
		rra(a);
	if (ft_sorted(a))
		return ;
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	small_sort(t_stack **a, t_stack **b)
{
	int	size;

	if (ft_sorted(a) || ft_stksize(*a) == 0
		|| ft_stksize(*a) == 1)
		return ;
	size = ft_stksize(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
}
