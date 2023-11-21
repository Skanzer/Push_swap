/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:50:42 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 16:49:37 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_stack **stack)
{
	t_stack	*first;
	int		max;
	int		max_bits;

	first = *stack;
	max = first->index;
	max_bits = 0;
	while (first)
	{
		if (first->index > max)
			max = first->index;
		first = first->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	t_stack	*first_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	first_a = *a;
	size = ft_stksize(first_a);
	max_bits = get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			first_a = *a;
			if (((first_a->index >> i) & 1) == 1)
				ra(a);
			else
				pb(b, a);
		}
		while (ft_stksize(*b) != 0)
			pa(a, b);
		i++;
	}
}
