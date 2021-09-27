/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:44:46 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 16:55:02 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int byte, size_t n)
{
    int     i;
    char    *temp;

    i = 0;
    temp = (char *)str;
    while (i < n)
    {
        temp = (unsigned char)byte;
        i++;
    }
    return (str);
}