/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:39:03 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 10:11:18 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*tdest;

	tdest = dest;
	while (*tdest)
		tdest++;
	while (n && *src)
	{
		*tdest++ = *src++;
		n--;
	}
	*tdest = '\0';
	return (dest);
}
