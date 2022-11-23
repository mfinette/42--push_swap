/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/23 20:48:17 by mfinette         ###   ########.fr       */
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
		print_tabs(data);
		sort_three(data);
		print_tabs(data);
	}
		free_all(data);
	return (0);
}

void	sort_all(t_stacks *data)
{
	int	i;
	int	r;
	
	srand(time(NULL));
	i = 0;
	ra(data);
	while (!check_result(data))
	{
		r = rand() % 12;
		if (r == 1)
			ra(data);
		if (r == 2)
			rb(data);
		if (r == 3)
			rr(data);
		if (r == 4)
			sa(data);
		if (r == 5)
			sb(data);
		if (r == 6)
			
			ss(data);
		if (r == 7)
			rra(data);
		if (r == 8)
			rrb(data);
		if (r == 9)
			rrr(data);
		if (r == 10)
			pa(data);
		if (r == 11)
			pb(data);
		i++;
	}
	//printf("operations done = %d\n", i);
}

void	sort_long(t_stacks *data)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	while (i < data->size_sort)
	{
		while (data->stack_sort[data->size_sort - i] != data->stack_a[data->size_a - 1])
		{
			ra(data);
			counter++;
		}
		pb(data);
		counter++;
		i++;
	}
	while (data->size_a != data->size_sort)
	{
		pa(data);
		counter++;
	}
	printf("operations done = %d\n", counter);
}	

void	sort_three(t_stacks data)
{
	printf("1 = %d\n", data.stack_a[data.size_a - 3]);
	printf("2 = %d\n", data.stack_a[data.size_a - 2]);
	printf("3 = %d\n", data.stack_a[data.size_a - 1]);
	if (data.stack_a[data.size_a - 1] > data.stack_a[data.size_a - 2])
	{
		if (data.stack_a[data.size_a - 2] < data.stack_a[data.size_a - 3])
		{
			if (data.stack_a[data.size_a - 3] < data.stack_a[data.size_a - 1])
				ra(&data);
			else
				sa(&data);
		}
		else
		{
			sa(&data);
			rra(&data);
		}
	}
	else
	{
		if (data.stack_a[data.size_a - 3] > data.stack_a[data.size_a - 1])
			{
				sa(&data);
				rra(&data);
			}
		else
			rra(&data);
	}
}