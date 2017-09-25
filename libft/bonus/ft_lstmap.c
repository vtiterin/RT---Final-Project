/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 08:16:22 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/29 09:38:43 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*fresh_start;

	if (list == NULL)
		return (NULL);
	fresh = (*f)(list);
	fresh_start = fresh;
	while (list->next)
	{
		list = list->next;
		fresh->next = (*f)(list);
		fresh = fresh->next;
	}
	return (fresh_start);
}
