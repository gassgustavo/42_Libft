/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:32:19 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 22:19:57 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int	start;
	int	end;

	if (!str || !set)
		return (0);
	start = 0;
	while (str[start] == set)
		start++;
	end = ft_strlen(str);
	while (str[end - 1] == set)
	{
		end--;
	}
	end = end + 1;
	return (ft_substr(str, start, end));
}

char	*ft_strtrim(char const *str, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (!str || !set)
		return (0);
	start = 0;
	while (str[start] == set)
		start++;
	end = ft_strlen(str);
	while (end == set)
		end--;
	return (ft_substr(str, start, (end - start) + 1));
}