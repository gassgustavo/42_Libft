/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:22:11 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/05 10:05:40 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_temp;
	char	*src_temp;

	i = 0;
	if (!dest && !src)
		return (0);
	dest_temp = (char *)dest;
	src_temp = (char *)src;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}
