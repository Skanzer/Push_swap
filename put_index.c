/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:02:15 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 16:13:50 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*t_stack	*get_next_min(t_stack **stack)
{
	t_stack	*first;
	t_stack	*has_min;
	int		min;

	has_min = NULL;
	min = 0;
	first = *stack;
	if (first)
	{
		while (first)
		{
			if ((first->index == -1) && (!min || first->nbr < has_min->nbr))
			{
				has_min = first;
				min = 1;
			}
			first = first->next;
		}
	}
	return (has_min);
}*/

static t_stack	*get_smallest(t_stack **stack)
{
	t_stack	*first;
	int		min;

	first = *stack;
	min = ft_stkmin(*stack);
	while (first)
	{
		if (first->nbr == min)
			return (first);
		first = first->next;
	}
	return (NULL);
}

static t_stack	*get_next_min(t_stack **stack, int previous)
{
	t_stack	*first;
	t_stack	*has_min;
	int		min;

	has_min = *stack;
	first = *stack;
	min = ft_stkmax(*stack);
	while (first)
	{
		if ((first->nbr > previous) && (first->nbr < min))
			min = first->nbr;
		first = first->next;
	}
	while (has_min)
	{
		if ((has_min->nbr == min) && (has_min->nbr > previous))
			return (has_min);
		has_min = has_min->next;
	}
	return (NULL);
}

void	put_index(t_stack **stack)
{
	t_stack	*first;
	int		index;

	index = 0;
	first = get_smallest(stack);
	while (first)
	{
		first->index = index;
		index++;
		first = get_next_min(stack, first->nbr);
	}
}
