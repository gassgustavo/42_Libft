/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:12:27 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 00:40:31 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	digit;

	digit = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
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
	int		digit;
	int		n_temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_temp = n * (1 - ft_negative(n) * 2);
	digit = count_digits(n_temp);
	str = (char *) malloc((ft_negative(n) + digit + 1) * sizeof(char));
	if (!str)
		return (0);
	if (ft_negative(n))
		str[0] = '-';
	str[ft_negative(n) + digit] = '\0';
	n_temp = n * (1 - ft_negative(n) * 2);
	while (digit > 0)
	{
		str[digit + ft_negative(n) - 1] = ntochar(n_temp);
		n_temp = n_temp / 10;
		digit--;
	}
	return (str);
}