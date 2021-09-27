/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:09:58 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 16:23:06 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *dup;

    dup = malloc(ft_strlen(str) + 1);
    if (!dup)
        return (0);
    ft_strlcpy(dup, str, ft_strlen(str));
    return (dup);
}