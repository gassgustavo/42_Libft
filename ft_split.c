/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 03:45:31 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 03:48:06 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char breaker)
{
	unsigned int	i;
	unsigned int	b_len;

	i = 0;
	b_len = 0;
	while (s[i])
	{
		if (s[i] == breaker)
			i++;
		else
		{
			while (s[i] != breaker && s[i])
				i++;
			b_len++;
		}
	}
	return (b_len);
}

static char	**get_words(char const *s, char breaker, char **table)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == breaker)
			i++;
		else
		{
			j = 0;
			while (s[i] != breaker && s[i])
			{
				i++;
				j++;
			}
			table[k] = (char *)ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(table[k], &s[i - j], j + 1);
			k++;
		}
	}
	return (table);
}

char	**ft_split(char const *s, char breaker)
{
	char	**table;

	table = (char **)ft_calloc(count_words(s, breaker) + 1, sizeof(char *));
	if (table)
		return (get_words(s, breaker, table));
	return (0);
}