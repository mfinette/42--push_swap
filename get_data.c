/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:34:19 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/23 08:14:04 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(t_stacks data)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < data.size_a)
	{
		data.stack_sort[i] = data.stack_a[i];
		i++;
	}
	i = 0;
	while (i < data.size_a - 1)
	{
		j = i + 1;
		while (j < data.size_a)
		{
			if (data.stack_sort[j] < data.stack_sort[i])
			{
				temp = data.stack_sort[i];
				data.stack_sort[i] = data.stack_sort[j];
				data.stack_sort[j] = temp;
			}
			j++;
		}
		i++;
	}
}

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

t_stacks	get_data_2(char *str)
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
	data.size_a = size;
	data.size_b = 0;
	stack_sort(data);
	return (data);
}

t_stacks	get_data_n(char	**str, int argc)
{
	int			i;
	t_stacks	data;

	i = 0;
	data.stack_a = ft_calloc(sizeof(int), (argc - 1));
	data.stack_b = ft_calloc(sizeof(int), (argc - 1));
	data.stack_sort = ft_calloc(sizeof(int), (argc - 1));
	data.size_a = argc - 1;
	data.size_b = 0;
	while (i < argc - 1)
	{
		data.stack_a[i] = ft_atoi(str[i]);
		i++;
	}
	stack_sort(data);
	return (data);
}
