/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 17:45:15 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <time.h>

int	main(int argc, char **argv)
{
	t_stacks	data;
	int			i;

	i = 0;
	if (argc < 2)
		return (0);
	if (argc == 2)
		data = get_data_2(argv[1]);
	if (argc > 2)
		data = get_data_n(&argv[1], argc);
	if (check_input(&data, argv[1]))
	{
		//print_tabs(&data);
		//sort_long(&data);
		solve_binary(&data);
		print_tabs(&data);
	}
	printf("IS SORT = %d\n", is_sort(&data));
	free_all(data);
	return (0);
}

int	is_sort(t_stacks *data)
{
	int	i;

	if (data->size_b)
		return (0);
	i = 0;
	while (++i < data->size_a)
		if (data->stack_a[i] < data->stack_a[i - 1])
			return (0);
	return (1);
}
