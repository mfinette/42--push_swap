/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/26 13:55:59 by mfinette         ###   ########.fr       */
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
		print_tabs(&data);
		sort_five(&data);
		print_tabs(&data);
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
	printf("operations done = %d\n", i);
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

int	sort_three(t_stacks *data)
{
	int	a1;
	int	a2;
	int	a3;

	a1 = data->stack_a[data->size_a - 3];
	a2 = data->stack_a[data->size_a - 2];
	a3 = data->stack_a[data->size_a - 1];
	if (a1 < a2 && a2 > a3 && a3 > a1)
		return (sa(data), 1);
	if (a1 > a2 && a2 > a3)
		return (ra(data), sa(data), 1);
	if (a1 > a2 && a2 < a3 && a1 > a3)
		return (rra(data), 1);
	if (a1 > a2 && a2 < a3 && a3 > a1)
		return (rra(data), sa(data), 1);
	if (a1 < a2 && a2 > a3 && a3 < a1)
		return (ra(data), 1);
	return (1);
}

int	is_in_b(t_stacks *data, int tmp)
{
	int	i;
	
	i = 0;
	while (i < data->size_b)
	{
		if (data->stack_b[i] == tmp)
			return (1);
		i++;
	}
	return (0);
}

int	get_number_below(t_stacks *data, int tmp)
{
	int	i;

	i = 0;
	if ((data->stack_sort[i]) == tmp)
		return (data->stack_sort[data->size_sort - 1]);
	while (data->stack_sort[i] != tmp)
		i++;
	return (data->stack_sort[i - 1]);
}

void	push_number_to_top(t_stacks *data, int nb)
{
	int	i;
	int	top_dist;
	int	bot_dist;

	i = 0;
	while (data->stack_a[i] != nb)
		i++;
	bot_dist = i;
	top_dist = data->size_a - i - 1;
	while (data->stack_a[data->size_a - 1] != nb)
	{
		if (top_dist > bot_dist)
			rra(data);
		else
			ra(data);
	}
}

int	sort_five(t_stacks *data)
{
	int	tmp;

	pb(data);
	pb(data);
	sort_three(data);
	tmp = data->stack_b[data->size_b - 1];
	while (is_in_b(data, get_number_below(data, tmp)))
	{
		rb(data);
		tmp = data->stack_b[data->size_b - 1];
	}
	push_number_to_top(data, get_number_below(data, tmp));
	pa(data);
	tmp = data->stack_b[data->size_b - 1];
	push_number_to_top(data, get_number_below(data, tmp));
	pa(data);
	while (!check_result(data))
		ra(data);
	return (0);
}
