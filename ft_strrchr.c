/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:00:41 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 20:15:04 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		leng;

	leng = ft_strlen(str);
	while (leng >= 0)
	{
		if (str[leng] == (char)c)
			return (&str[leng]);
		leng--;
	}
	return (0);
}
