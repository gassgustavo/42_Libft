/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:43:32 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 16:04:02 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nbr;

    i = 0;
    sign = 1;
    nbr = 0;
    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + (str[i] - 48);
        i++;
    }
    return (nbr);
}