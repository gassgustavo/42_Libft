/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 01:02:25 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 01:05:43 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while ((n / 10) != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	ntochar(int n)
{
	if (n < 10)
		return (n + 48);
	else
		return (ntochar(n % 10));
}

char	*ft_itoa(int n)
{
	int		len;
	int		n_temp;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = nlen(n_temp);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	if (n_temp < 0)
	{
		n_temp *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = ntochar(n_temp);
		n_temp /= 10;
		len--;
	}
	return (str);
}
