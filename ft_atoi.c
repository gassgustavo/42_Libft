/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:43:32 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 17:44:52 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c == '\n')
		|| (c == '\t')
		|| (c == '\v')
		|| (c == '\f')
		|| (c == '\r')
		|| (c == ' '))
		return (1);
	return (0);
}

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
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		response = (str[i] - '0') + (response * 10);
		i++;
	}
	return (response * signal);
}
