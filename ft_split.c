/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 01:31:09 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 02:22:58 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int		i;
	int		nwords;
	int		trigger;

	i = 0;
	nwords = 0;
	trigger = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && trigger == 0)
		{
			trigger = 1;
			nwords++;
		}
		else if (str[i] == c)
			trigger = 0;
		i++;
	}
	return (nwords);
}

static char	**words(char const *str, char c, char **list)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i] != c && str[i] != '\0')
			{
				i++;
				j++;
			}
			list[k] = (char *)ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(list[k], &str[i - j], j + 1);
			k++;
		}
	}
	return (list);
}

char	**ft_split(char const *str, char c)
{
	char	**list;

	list = (char **)ft_calloc(count_words(str, c) + 1, sizeof(char *));
	if (!list)
		return (0);
	return (words(str, c, list));
}
