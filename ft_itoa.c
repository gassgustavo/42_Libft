/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:12:27 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/02 16:54:19 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	ntochr(int n)
{
	if (n < 10)
		return (n + 48);
	else
		return (ntochr(n % 10));
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		n_temp;

	n_temp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = nlen(n_temp);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n_temp *= -1;
	}
	while (len > 0)
	{
		str[len] = ntochr(n_temp);
		n_temp /= 10;
		len--;
	}
}
