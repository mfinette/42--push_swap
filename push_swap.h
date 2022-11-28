/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:10:57 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/28 11:23:38 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int	*stack_a;
	int	*stack_b;
	int	*stack_sort;
	int	size_a;
	int	size_b;
	int	size_sort;
	int	error_check;
}				t_stacks;

// ****OPERATIONS*****
void			sa(t_stacks *data);
void			sb(t_stacks *data);
void			ss(t_stacks *data);
void			ra(t_stacks *data);
void			rb(t_stacks *data);
void			rr(t_stacks *data);
void			pb(t_stacks *data);
void			pa(t_stacks *data);
void			rra(t_stacks *data);
void			rrb(t_stacks *data);
void			rrr(t_stacks *data);

// ****PARSING*****
t_stacks		get_data(int argc, char **argv);
t_stacks		get_data_tab(int argc, char	**str);
t_stacks		get_data_str(char *str);
void			binary_index_parse(t_stacks	*data);
int				check_data(int argc, char **argv);
int				check_overflow_str(char *str);
int				check_overflow_tab(int argc, char **argv);

// ****ALGO****
int				general_sort(t_stacks *data);
int				sort_two(t_stacks *data);
int				inverse_sort_two_b(t_stacks *data);
int				sort_two_b(t_stacks *data);
int				sort_three(t_stacks *data);
int				sort_five(t_stacks *data);
void			solve_binary(t_stacks *data);

// ****UTILS****
void			free_all(t_stacks *data);
void			print_tabs(t_stacks *data);
void			sort_all(t_stacks *data);
int				ft_atoi(const char *str);
long			long_atoi(char *str);
void			stack_sort(t_stacks data, int n);
void			*ft_calloc(size_t nmemb, size_t size);
size_t			ft_strlen(const char *str);
void			ft_putstrendl(char *str);
int				is_sort(t_stacks *data);

#endif