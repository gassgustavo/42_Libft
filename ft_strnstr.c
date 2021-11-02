/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:12:34 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 19:41:24 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	substr_len;

	i = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	substr_len = ft_strlen(substr);
	while (str[i] != '\0' && len >= substr_len)
	{
		if (ft_strncmp(&str[i], substr, substr_len) == 0)
			return ((char *)&str[i]);
		i++;
		len--;
	}
	return (0);
}
