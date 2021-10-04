/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:32:19 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 21:47:26 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	size_t	end;
	char	*substr;

	start = 0;
	if (!str || !set)
		return (0);
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (end && ft_strchr(set, str[end]))
		end--;
	return (ft_substr(str, start, end + 1));
}
