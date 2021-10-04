/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 01:02:25 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 01:16:26 by gmoraes-         ###   ########.fr       */
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

static int	ft_negative(int n)
{
	return (n < 0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		n_temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_temp = n * (1 - ft_negative(n) * 2);
	len = nlen(n_temp);
	str = (char *)ft_calloc((ft_negative(n) + len + 1), sizeof(char));
	if (!str)
		return (0);
	if (ft_negative(n))
		str[0] = '-';
	n_temp = n * (1 - ft_negative(n) * 2);
	while (len > 0)
	{
		str[len + ft_negative(n) - 1] = ntochar(n_temp);
		n_temp = n_temp / 10;
		len--;
	}
	return (str);
}
