/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:23:12 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/28 16:58:31 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	print_tabs(t_stacks *data)
{
	int	i;

	i = data->size_a - 1;
	printf("\n");
	while (i >= 0)
	{
		printf("a[%d] = %d\n", i, data->stack_a[i]);
		i--;
	}
	printf("\n");
	i = data->size_b - 1;
	while (i >= 0)
	{
		printf("b[%d] = %d\n", i, data->stack_b[i]);
		i--;
	}	
}
