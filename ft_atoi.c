/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:43:32 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 17:50:06 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		i;
	int		signal;
	int		response;
	char	*str;

	i = 0;
	signal = 1;
	response = 0;
	str = (char *)s;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		response = (str[i] - '0') + (response * 10);
		i++;
	}
	return (response * signal);
}
