/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:00:41 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 20:06:15 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_temp;
	int		len;

	str_temp = (char *)str;
	if (str[0] == '\0')
		return (0);
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str_temp[len] == (unsigned char)c)
			return ((char *)&str_temp[len]);
		len--;
	}
	return (0);
}
