/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 07:57:10 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/28 12:16:59 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	if (!str)
		return (0);
	if (start >= ft_strlen(str))
		len = 0;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	j = start;
	while (len > 0)
	{
		substr[i] = str[j];
		i++;
		j++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
