/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:01:33 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 10:07:57 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*tdest;

	tdest = dest;
	while (*tdest)
		tdest++;
	while (*src)
	{
		*tdest = *src;
		tdest++;
		src++;
	}
	*tdest = '\0';
	return (dest);
}
