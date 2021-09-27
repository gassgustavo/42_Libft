/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:50:54 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 19:58:10 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t          i;
    unsigned char   *n_str1;
    unsigned char   *n_str2;

    i = 0;
    n_str1 = (unsigned char *)str1;
    n_str2 = (unsigned char *)str2;
    while (i < n)
    {
        if (n_str1[i] != n_str2[i])
            return (n_str1[i] - n_str2[i]);
        i++;
    }
    return (0);
}