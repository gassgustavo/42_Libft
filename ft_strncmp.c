/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:53:39 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/13 00:50:25 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned int    i;
    
    i = 0;
    while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
    {
        if (str1[i] > str2[i])
            return (1);
        if (str1[i] < str2[i])
            return (-1);
        i++;
    }
    return (0);
}