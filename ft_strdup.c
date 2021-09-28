/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:09:58 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 23:01:51 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    int     len;
    char    *dup;

    len = ft_strlen(str) + 1;
    dup = malloc(len);
    if (!dup)
        return (0);
    ft_strlcpy(dup, str, len);
    return (dup);
}