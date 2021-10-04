/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:50:54 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 11:49:04 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*new_str1;
	unsigned char	*new_str2;

	i = 0;
	new_str1 = (unsigned char *)str1;
	new_str2 = (unsigned char *)str2;
	while (i < n)
	{
		if (new_str1[i] != new_str2[i])
			return (new_str1[i] - new_str2[i]);
		i++;
	}
	return (0);
}
