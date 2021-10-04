/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:02:32 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 11:28:12 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dup;

	if (!str || !f)
		return (0);
	i = 0;
	dup = ft_strdup(str);
	if (!dup)
		return (0);
	while (dup[i] != '\0')
	{
		dup[i] = f(i, str[i]);
		i++;
	}
	return (dup);
}
