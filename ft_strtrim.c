/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:32:19 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 21:00:26 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	if (!str || !set)
		return (0);
	start = 0;
	while (str[start] != '\0' && strchr(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (end != 0 && strchr(set, str[end]))
		end--;
	return (ft_substr(str, start, end + 1));
}*/

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	size_t	end;

	start = 1;
	if (!str || !set)
		return (0);
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (end && ft_strchr(set, str[end]))
		end--;
	return (ft_substr(str, start, end + 1));
}
