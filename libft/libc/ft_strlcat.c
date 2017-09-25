/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:39:03 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/29 10:17:03 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*t_dest;
	char	*t_src;
	size_t	tsize;
	size_t	len;

	tsize = size;
	t_dest = (char*)dest;
	t_src = (char*)src;
	while (tsize-- && *dest)
		dest++;
	len = dest - t_dest;
	tsize = size - len;
	if (tsize-- == 0)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (tsize)
		{
			tsize--;
			*dest++ = *src;
		}
		src++;
	}
	*dest = '\0';
	return (len + (src - t_src));
}
