/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:03:53 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 13:45:44 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	int		i;

	nlen = ft_strlen(needle);
	if (needle == '\0')
		return ((char*)haystack);
	i = 1;
	while (*haystack && nlen <= len-- &&
			(i = ft_strncmp(haystack, needle, nlen)))
		haystack++;
	if (i != 0)
		return (NULL);
	else
		return ((char*)haystack);
}
