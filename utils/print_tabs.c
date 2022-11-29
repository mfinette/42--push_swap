/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:23:12 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/29 07:24:49 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	print_tabs(t_stacks *data)
{
	int	i;

	i = 0;
	printf("\n");
	while (i <= data->size_a - 1)
	{
		printf("a[%d] = %d\n", i, data->stack_a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= data->size_b - 1)
	{
		printf("b[%d] = %d\n", i, data->stack_b[i]);
		i++;
	}	
}
