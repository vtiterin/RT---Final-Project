/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 10:30:45 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/30 11:08:17 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*rev;
	char	*rev_start;
	size_t	len;

	if (*str)
	{
		len = ft_strlen(str);
		if (len > 1)
		{
			rev = ft_strnew(len);
			rev_start = rev;
			while (len > 0)
				*rev++ = str[--len];
			*rev = '\0';
			return (rev_start);
		}
		return (str);
	}
	return (NULL);
}
