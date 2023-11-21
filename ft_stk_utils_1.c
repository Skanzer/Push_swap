/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_utils_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 03:31:41 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 17:47:50 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stknew(int nbr)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->next = NULL;
	return (new);
}

int	get_distance(t_stack **stack, int index)
{
	t_stack		*first;
	int			distance;

	distance = 0;
	first = *stack;
	while (first)
	{
		if (first->index == index)
			break ;
		distance++;
		first = first->next;
	}
	return (distance);
}

int	get_min(t_stack **stack, int value)
{
	t_stack	*first;
	int		min;

	first = *stack;
	min = first->index;
	while (first->next)
	{
		first = first->next;
		if ((first->index < min) && first->index != value)
			min = first->index;
	}
	return (min);
}

void	print_stack(t_stack *first)
{
	t_stack	*tmp;

	tmp = first;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->nbr, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}
