/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:10:12 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/28 12:25:50 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*n_str;

	if (!str1 || !str2)
		return (0);
	n_str = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (!n_str)
		return (0);
	n_str = ft_strlcat(str1, str2, n_str);
	return (n_str);
}
