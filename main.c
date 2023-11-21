/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerzeri <szerzeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:40:32 by szerzeri          #+#    #+#             */
/*   Updated: 2023/11/03 17:16:00 by szerzeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_stkadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (stack)
	{
		if (*stack == NULL)
			*stack = new;
		else
		{
			tmp = ft_stklast(*stack);
			tmp->next = new;
		}
	}
}

static char	**input(int argc, char **argv)
{
	char	**tmp;

	if (argc == 2)
		tmp = ft_split(argv[1], ' ');
	else
	{
		tmp = argv;
		tmp++;
	}
	return (tmp);
}

char	**take_input(int argc, char **argv, char **values)
{
	int		i;
	long	value;

	i = 0;
	values = input(argc, argv);
	if (!values)
		ft_error(argc, values);
	while (values[i])
	{
		value = ft_atoi2(values[i]);
		if (is_number(values[i]) != 1)
			ft_error(argc, values);
		if (ft_duplicate(value, values, i) != 1)
			ft_error(argc, values);
		if (value < -2147483648 || value > 2147483647)
			ft_error(argc, values);
		i++;
	}
	return (values);
}

void	fill_stack(t_stack **a, char **values, int argc)
{
	int	value;
	int	i;

	i = 0;
	while (values[i])
	{
		value = ft_atoi(values[i]);
		ft_stkadd_back(a, ft_stknew(value));
		i++;
	}
	if (argc == 2)
		free_double(values);
	put_index(a);
}

int	main(int argc, char **argv)
{
	t_stack		**a;
	t_stack		**b;
	char		**values;

	values = NULL;
	if (argc < 2)
		ft_error(argc, values);
	values = take_input(argc, argv, values);
	a = (t_stack **)malloc(sizeof(t_stack));
	b = (t_stack **)malloc(sizeof(t_stack));
	*a = NULL;
	*b = NULL;
	fill_stack(a, values, argc);
	if (ft_sorted(a) != 0)
	{
		free_stack(a);
		free_stack(b);
		return (0);
	}
	sort_stack(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
