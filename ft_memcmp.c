/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:50:54 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/08 10:33:18 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*str1_temp;
	unsigned char	*str2_temp;

	i = 0;
	str1_temp = (unsigned char *)str1;
	str2_temp = (unsigned char *)str2;
	while (i < n)
	{
		if (str1_temp[i] != str2_temp[i])
			return ((int)(str1_temp[i] - str2_temp[i]));
		i++;
	}
	return (0);
}
