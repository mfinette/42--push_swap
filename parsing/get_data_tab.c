/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:40:00 by mfinette          #+#    #+#             */
/*   Updated: 2022/12/10 11:12:18 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stacks	get_data_tab(int argc, char **str)
{
	int			i;
	t_stacks	data;

	i = 0;
	data.stack_a = ft_calloc(sizeof(int), (argc));
	data.stack_b = ft_calloc(sizeof(int), (argc));
	data.stack_sort = ft_calloc(sizeof(int), (argc));
	if (!data.stack_a || !data.stack_b || !data.stack_sort)
		return (data);
	data.size_a = argc - 1;
	data.size_sort = argc - 1;
	data.size_b = 0;
	while (i < argc - 1)
	{
		data.stack_a[i] = ft_atoi(str[i]);
		i++;
	}
	stack_sort(data, 0);
	return (data);
}
