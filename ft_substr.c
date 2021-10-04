/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 07:57:10 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 23:40:13 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!str)
		return (0);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	return (substr);
}*/

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!str)
		return (0);
	if (start >= ft_strlen(str))
		len = 0;
	else if ((start + len) > ft_strlen(str))
		len = ft_strlen(str) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	while (len > 0)
	{
		substr[i] = str[start];
		i++;
		start++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
