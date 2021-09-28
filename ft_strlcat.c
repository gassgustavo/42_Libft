/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 01:19:05 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/28 11:47:05 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	n_str;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	n_str = destlen + srclen;
	i = 0;
	if (destlen > size)
		return (srclen + size);
	while (src[i] != '\0' && destlen < (size - 1))
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen] = '\0';
	return (n_str);
}
