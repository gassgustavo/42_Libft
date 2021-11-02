/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:01:27 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/08 10:38:21 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = malloc((nmemb * size));
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
