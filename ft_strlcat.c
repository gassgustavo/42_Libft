/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 01:19:05 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/13 12:35:15 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dstlen;
    size_t  srclen;
    size_t  ret;
    size_t  i;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    ret = dstlen + srclen;
    i = 0;
    if (dstlen > size)
        return (srclen + size);
    while (src[i] != '\0' && dstlen < (size - 1))
    {
        dst[dstlen] = src[i];
        dstlen++;
        i++;
    }
    dst[dstlen] = '\0';
    return (ret);
}