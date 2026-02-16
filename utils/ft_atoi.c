/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:09:30 by marvin            #+#    #+#             */
/*   Updated: 2026/02/16 18:14:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_atoi(char *numstr)
{
    int i;
    int qsign;
    int sign;
    int result;
    
    if (!numstr)
        return (-1);
    i = 0;
    result = 0;
    sign = 1;
    qsign = 0;
    while(numstr[i] == '-' && qsign < 1)
    {
        qsign += 1;
        sign *= -1;
        i++;
    }
    while(numstr[i] >= '0' && numstr[i] <= '9')
    {
        result = (result * 10) + (numstr[i] - 48);
        i++; 
    }
    return (result * sign);
}
