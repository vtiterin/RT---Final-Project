/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 10:05:49 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 09:16:52 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(s) + 1;
	tmp = (char*)malloc(len);
	if (tmp == NULL)
		return (NULL);
	else
		return (ft_memcpy(tmp, s, len));
}
