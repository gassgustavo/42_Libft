/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:53:39 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 18:56:13 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int byte, size_t n)
{
    char    *temp;
    int     i;

    temp = (char *)str;
    i = 0;
    while (i < n)
    {
        temp[i] = (unsigned char)byte;
        i++;
    }
    return (str);
}