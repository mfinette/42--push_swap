/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:42:25 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/27 19:12:02 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	get_next_i(char *str, int i)
{
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	return (i);
}

static	size_t	get_size(char *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			count++;
		i++;
	}
	return (count + 1);
}

t_stacks	get_data_str(char *str)
{
	size_t		i;
	size_t		j;
	size_t		size;
	t_stacks	data;

	i = 0;
	j = 0;
	size = get_size(str);
	data.stack_a = ft_calloc(sizeof(int), size);
	data.stack_b = ft_calloc(sizeof(int), size);
	data.stack_sort = ft_calloc(sizeof(int), size);
	while (str[i])
	{
		data.stack_a[j] = ft_atoi(&str[i]);
		i = get_next_i(str, i);
		j++;
	}
	data.size_sort = size;
	data.size_a = size;
	data.size_b = 0;
	stack_sort(data, 0);
	binary_index_parse(&data);
	return (data);
}
