/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:00:41 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/12 22:48:20 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen(str);
    while (str[i] != '0' && str[i] != c)
    {
        i--;
    }
    if (str[i] == c)
    {
        return ((char *)&str[i]);
    }
    return (0);
}