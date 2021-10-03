/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:12:34 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 19:09:23 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	substr_len;

	i = 0;
	j = 0;
	if (substr[i] == '\0')
		return ((char *)str);
	substr_len = ft_strlen(substr);
	while (str[i] && (j < len))
	{
		if ((ft_strncmp((char *)&str[i], (char *)substr, substr_len) == 0)
			&& (j + substr_len <= len))
			return ((char *)str);
		i++;
		j++;
	}
	return (0);
}

/*char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	substr_len;

	i = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	substr_len = ft_strlen(substr);
	while (str[i] != '\0' && len - 1 > 0)
	{
		if (ft_strncmp(&str[i], substr, substr_len) == 0)
			return ((char *)&str[i]);
		i++;
		len--;
	}
	return (0);
}
*/