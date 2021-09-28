/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:32:19 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/28 19:51:50 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str1, char const *set)
{
	int	start;
	int	len;

	if (!str1 || !set)
		return (0);
	start = 0;
	while (str1[start] == set)
	{
		start++;
	}
	len = ft_strlen(str1);
	while ((str1[len - 1]) == set)
	{
		len--;
	}
	len = len + 1;
	return (ft_substr(str1, start, len));
}
