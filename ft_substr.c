/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 07:57:10 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/28 12:11:11 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i1;
	size_t	i2;
	char	*substr;

	if (!str || start >= len)
		return (0);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	i1 = start;
	i2 = 0;
	while (len > 0)
	{
		substr[i2] = str[i1];
		i2++;
		i1++;
		len--;
	}
	substr[i2] = '\0';
	return (substr);
}
