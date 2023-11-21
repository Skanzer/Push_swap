/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:34:49 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 13:46:39 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_double(char **tmp)
{
	int	i;

	i = 0;
	if (!tmp)
		return ;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

void	free_stack(t_stack **stack)
{
	t_stack	*node;
	t_stack	*tmp;

	node = *stack;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	free(stack);
}
