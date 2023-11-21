/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:13:19 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:07 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int argc, char **values)
{
	write(2, "Error\n", 6);
	if (argc < 2)
		exit(1);
	else if (argc == 2)
		free_double(values);
	exit(1);
}

void	op_error(void)
{
	write(2, "Operation error\n", 16);
}

int	is_number(char *value)
{
	int	i;

	i = 0;
	if (value[i] == '-')
		i++;
	while (value[i])
	{
		if (ft_isdigit(value[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_duplicate(long value, char **values, int i)
{
	i++;
	while (values[i])
	{
		if (value == ft_atoi(values[i]))
			return (0);
		i++;
	}
	return (1);
}
