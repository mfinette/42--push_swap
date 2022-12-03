/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/12/03 10:21:47 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void	print_tabs(t_stacks *data)
// {
// 	int	i;

// 	i = 0;
// 	printf("\n");
// 	while (i <= data->size_a - 1)
// 	{
// 		printf("a[%d] = %d	|	b[%d] = %d	|	s[%d] = %d\n", i, data->stack_a[i], i, data->stack_b[i], i, data->stack_sort[i]);
// 		i++;
// 	}			
// }

int	main(int argc, char **argv)
{
	t_stacks	data;

	if (!check_data(argc, argv))
		return (0);
	data = get_data(argc, argv);
	if (!data.stack_a || !data.stack_b || !data.stack_sort)
		return (free_all(&data), 1);
	general_sort(&data);
	free_all(&data);
	return (0);
}
