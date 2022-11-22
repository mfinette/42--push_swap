/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:47:26 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/22 20:41:38 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
	//sa(data);
	while (i < data.size_a)
	{
		printf("a[%d] = %d\n", i, data.stack_a[i]);
		i++;
	}
	i = 0;
	while (i < data.size_b)
	{
		printf("data.stack_b[%d] = %d\n", i, data.stack_b[i]);
		i++;
	}
	i = 0;
	pb(&data);
	//printf("DATA /////////////////////////////\n\n");
	//printf("data.size_a = %d\n", data.size_a);
	while (i < data.size_a)
	{
		printf("a[%d] = %d\n", i, data.stack_a[i]);
		i++;
	}
	i = 0;
	printf("\n");
	// printf("\n");
	// printf("data.size_b = %d\n", data.size_b);
	while (i < data.size_b)
	{
		printf("b[%d] = %d\n", i, data.stack_b[i]);
		i++;
	}		
	// i = 0;
	// printf("\n");
	// while (i < data.size_a)
	// {
	// 	printf("data.stack_sort[%d] = %d\n", i, data.stack_sort[i]);
	// 	i++;
	// }
}
