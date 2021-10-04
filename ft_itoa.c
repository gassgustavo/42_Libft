/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:12:27 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/04 00:29:37 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n /= 10 > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ntochar(char *str, size_t size, size_t n, int is_negative)
{
	str[size] = 0;
	while (size--)
	{
		str[size] = (n % 10) + 48;
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	size_t	n_len;
	char	*str;

	n_len = count_digits(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	str = malloc(n_len + 1);
	if (!str)
		return (0);
	return (ntochar(str, n_len, (unsigned int)n, is_negative));
}
