/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:46:03 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 19:44:52 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_result(t_stacks *data)
{
	int	i;

	i = 1;
	while (i < data->size_sort)
	{
		if (data->stack_a[i] != data->stack_sort[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > '9' || str[i] < '0') && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	check_input(t_stacks *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->size_a)
	{
		j = i + 1;
		while (j < data->size_a)
		{
			if (data->stack_a[i] == data->stack_a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_tab(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if ((argv[i][j] > '9' || argv[i][j] < '0') || argv[i][j] != '-')
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

int	check_data(int argc, char **argv)
{
	t_stacks	data;
	int			i;

	if (argc < 2)
		return (ft_putstrendl("error\n"), 0);
	if (argc == 2)
	{
		if (check_str(argv[1]))
			data = get_data_str(argv[1]);
		else
			return (ft_putstrendl("error\n"), 0);
	}	
	if (argc > 2)
	{
		if (check_tab(argv))
			data = get_data_tab(argc, &argv[1]);
		else
			return (ft_putstrendl("error\n"), 0);
	}
	if (!check_input(&data))
		return (ft_putstrendl("error\n"), 0);
	return (1);
}