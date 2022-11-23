/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/23 10:04:38 by mfinette         ###   ########.fr       */
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
		//print_tabs(data);
		sort_all(&data);
		//print_tabs(data);
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
	// ra(data);
	// ra(data);

