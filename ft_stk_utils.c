/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 03:05:12 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/02 19:58:00 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stklast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	ft_stksize(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ft_stkmin(t_stack *stack)
{
	int	min;

	min = stack->nbr;
	while (stack)
	{
		if (stack->nbr < min)
			min = stack->nbr;
		stack = stack->next;
	}
	return (min);
}

int	ft_stkmax(t_stack *stack)
{
	int	max;

	max = stack->nbr;
	while (stack)
	{
		if (stack->nbr > max)
			max = stack->nbr;
		stack = stack->next;
	}
	return (max);
}

int	ft_index(t_stack *stack, int nbr)
{
	int	i;

	i = 0;
	while (stack->nbr != nbr)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
