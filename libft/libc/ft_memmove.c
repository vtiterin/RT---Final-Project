/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 11:21:46 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 09:11:25 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	tn;
	char	*tdst;
	char	*tsrc;

	tdst = (char*)dest;
	tsrc = (char*)src;
	tn = n;
	if (src > dest)
	{
		while (tn--)
			*tdst++ = *tsrc++;
	}
	else
	{
		while (n--)
			tdst[n] = tsrc[n];
	}
	return (dest);
}
