/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 01:02:25 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 02:08:15 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	int	len;

	len = 1;
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
	len = nlen(n);
	n_temp = n;
	if (n < 0)
	{
		n_temp *= -1;
		len = len + 1;
	}
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	while (len >= 1)
	{
		str[len - 1] = ntochar(n_temp);
		n_temp = n_temp / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
