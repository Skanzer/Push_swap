/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:55:24 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 12:16:16 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi2(const char *str)
{
	int		i;
	int		sign;
	long	result;
	int		count_sign;

	i = 0;
	sign = 1;
	result = 0;
	count_sign = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		if (count_sign++ == 1)
			return (0);
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
