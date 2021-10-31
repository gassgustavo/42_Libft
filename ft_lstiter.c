/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:10:29 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/15 10:10:29 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *temp;

	if (!lst)
		return ;
	temp = lst;
	while (temp->next)
	{
		f(temp->next);
		temp = temp->next;
	}
	f(temp->content);
}
