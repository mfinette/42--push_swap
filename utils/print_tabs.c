/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:23:12 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/26 13:56:32 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../push_swap.h"

void	print_tabs(t_stacks *data)
{
	int	i;

	i = 0;
	printf("\n");
	while (i < data->size_a)
	{
		printf("a[%d] = %d\n", i, data->stack_a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < data->size_b)
	{
		printf("b[%d] = %d\n", i, data->stack_b[i]);
		i++;
	}	
}
