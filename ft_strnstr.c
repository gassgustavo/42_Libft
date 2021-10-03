/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:12:34 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 19:26:14 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	substr_len;

	if (substr[0] == '\0')
		return ((char *)str);
	substr_len = ft_strlen(substr);
	while ((char *)&str[i] != '\0' && len-- >= substr_len)
	{
		if ((char *)&str[i] == *substr && ft_strncmp(str, substr, substr_len) == 0)
			return ((char *)str);
		i++;
	}
	return (0);
}
