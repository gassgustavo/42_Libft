/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:22:11 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 20:03:23 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *new_dest;
    char    *new_src;

    i = 0;
    if (!dest && !src)
        return (0);
    new_dest = (char *)dest;
    new_src = (char *)src;
    while (i < n)
    {
        new_dest[i] = new_src[i];
        i++;
    }
    return (dest);
}