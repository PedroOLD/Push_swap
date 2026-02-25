/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:13:27 by marvin            #+#    #+#             */
/*   Updated: 2026/02/24 21:45:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct t_stack {
    int number;
    struct t_stack* next;
} t_stack;

void     ft_putchar(int c);
int     ft_strlen(char *str);
void    ft_putstr(char *str);
char    **ft_split(char *str, char c);
char    *ft_substr(char *str, long start, long len);
int     ft_isnumber(char c);
int     ft_atoi(char *numstr);
t_stack *create_node(int number);
void	add_front_list(t_stack **stack, t_stack *node);
void    add_final_list(t_stack **stack, t_stack *node);

#endif