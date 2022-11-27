/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 19:54:03 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <time.h>

int	main(int argc, char **argv)
{
	t_stacks	data;

	// if (!check_data(argc, argv))
	// 	return (0);
	data = get_data(argc, argv);
	//sort_five(&data);
	general_sort(&data);
	//solve_binary(&data);
	//printf("IS SORT = %d\n", is_sort(&data));
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
