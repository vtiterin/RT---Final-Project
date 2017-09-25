/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:00:29 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/29 14:44:34 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	const char	*tmp;

	tmp = s;
	last = NULL;
	while (*tmp++)
	{
		if (*s == (char)c)
			last = (char*)s;
		s++;
	}
	if (*s == (char)c)
		last = (char*)s;
	return (last);
}
