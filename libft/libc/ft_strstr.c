/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:41:40 by oshudria          #+#    #+#             */
/*   Updated: 2017/05/16 11:09:06 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	while (*haystack)
	{
		if (!ft_memcmp(haystack++, needle, len))
			return ((char*)haystack - 1);
	}
	return (0);
}
