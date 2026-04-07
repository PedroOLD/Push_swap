/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:13:27 by marvin            #+#    #+#             */
/*   Updated: 2026/04/07 19:14:16 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct t_stack
{
	int				number;
	int				was_used;
	int				index_node;
	struct t_stack	*next;
	struct t_stack	*prev;
}	t_stack;

int		ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
char	**ft_split(char *str, char c);
char	*ft_substr(char *str, long start, long len);
int		ft_isnumber(char c);
int		ft_atoi(char *numstr);
int		ft_putnbr(int nb);
int		ft_putnbr_hexa(unsigned long nb, char c, unsigned int dig);
int		ft_printf(const char *str, ...);
int		validation_number_repert(int current_number, t_stack **stack);
void	print_list(t_stack **stack);
void	free_stack(t_stack **stack);
int		is_valid_number(char *str);
void	do_pb(t_stack **stack_a, t_stack **stack_b);
void	do_ra(t_stack **stack);
void	do_sa(t_stack **a);
void	do_rra(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
int		find_min_pos(t_stack **a);
void	rotate_to_min(t_stack **a);
t_stack	*create_node(int number);
void	add_front_list(t_stack **stack, t_stack *node);
void	add_final_list(t_stack **stack, t_stack *node);
void	add_index_node(t_stack **stack);
void	swap_stack(t_stack **stack);
void	push(t_stack **dest, t_stack **src);
int		stack_size(t_stack **stack);
void	rotate_stack(t_stack **stack);
void	rotate_reverse_stack(t_stack **stack);
void	push_swap(t_stack **stack_a, t_stack **stack_b);
void	free_array(char **array);
void	print_error(int i);

#endif
