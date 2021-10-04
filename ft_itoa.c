/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 01:02:25 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 02:09:35 by gmoraes-         ###   ########.fr       */
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
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = nlen(n);
	if (n < 0)
	{
		n *= -1;
		len = len + 1;
	}
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	while (len >= 1)
	{
		str[len - 1] = ntochar(n);
		n = n / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
