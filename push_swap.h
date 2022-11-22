/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:10:57 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/22 20:22:40 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int	*stack_a;
	int	*stack_b;
	int	*stack_sort;
	int	size_a;
	int	size_b;
}				t_stacks;

t_stacks		get_data_n(char	**str, int argc);
t_stacks		get_data_2(char *str);
int				ft_atoi(const char *str);
void			stack_sort(t_stacks data);
void			*ft_calloc(size_t nmemb, size_t size);
size_t			ft_strlen(const char *str);
void			ft_putstrendl(char *str);
void			sa(t_stacks data);
void			sb(t_stacks data);
void			ss(t_stacks data);
void			ra(t_stacks data);
void			rb(t_stacks data);
void			rr(t_stacks data);

#endif