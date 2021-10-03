/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 03:45:31 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 15:06:24 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	unsigned int	i;
	unsigned int	trigger;
	unsigned int	word_num;

	i = 0;
	trigger = 0;
	word_num = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && trigger == 0)
		{
			word_num++;
			trigger = 1;
		}
		else if (str[i] == c)
			trigger = 0;
		i++;
	}
	return (word_num);
}

static char	**get_words(char const *str, char c, char **list)
{
	unsigned int	i;
	unsigned int	word_len;
	unsigned int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word_len = 1;
			while (str[i] != c)
			{
				word_len++;
				i++;
			}
			list[k] = (char *)ft_calloc(word_len, sizeof(char));
			ft_strlcpy(list[k], &str[i - word_len], word_len);
			k++;
		}
		i++;
		/*if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i] != c && str[i])
			{
				i++;
				j++;
			}
			list[k] = (char *)ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(list[k], &str[i - j], j + 1);
			k++;
		}*/
	}
	return (list);
}

char	**ft_split(char const *str, char c)
{
	char	**list;

	list = (char **)ft_calloc(count_words(str, c) + 1, sizeof(char *));
	if (list)
		return (get_words(str, c, list));
	return (0);
}