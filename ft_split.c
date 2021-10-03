/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 01:31:09 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 03:08:01 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int		i;
	int		word_num;
	int		trigger;

	i = 0;
	word_num = 0;
	trigger = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && trigger == 0)
		{
			trigger = 1;
			word_num++;
		}
		else if (str[i] == c)
			trigger = 0;
		i++;
	}
	return (word_num);
}

static char **words(char const *str, char c, char **list)
{
	int i;
	int k;
	int	trigger;
	int	word_len;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word_len = 0;
			while (str[i] != c /*&& str[i] != '\0'*/)
			{
				i++;
				word_len++;
			}
			list[k] = (char *)ft_calloc(word_len + 1, sizeof(char *));
			ft_strlcpy(list[k], &str[i - word_len], word_len + 1);
			k++;
		}
		i++;
	}
	return (list);
}

/*static char	**words(char const *str, char c, char **list)
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
}*/

char	**ft_split(char const *str, char c)
{
	char	**list;

	list = (char **)ft_calloc(count_words(str, c) + 1, sizeof(char *));
	if (!list)
		return (0);
	return (words(str, c, list));
}
