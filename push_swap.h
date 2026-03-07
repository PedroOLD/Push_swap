/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:13:27 by marvin            #+#    #+#             */
/*   Updated: 2026/03/07 18:12:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct t_stack {
	int number;
	struct t_stack* next;
} t_stack;

int     ft_putchar(char c);
int     ft_strlen(char *str);
int		ft_putstr(char *str);
char    **ft_split(char *str, char c);
char    *ft_substr(char *str, long start, long len);
int     ft_isnumber(char c);
int     ft_atoi(char *numstr);
t_stack *create_node(int number);
void	add_front_list(t_stack **stack, t_stack *node);
void    add_final_list(t_stack **stack, t_stack *node);
void    swap_stack(t_stack **stack);
int		ft_putnbr(int nb);
int		ft_putnbr_hexa(unsigned long nb, char c, unsigned int dig);
int		ft_printf(const char *str, ...);

#endif