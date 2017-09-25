/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 08:16:56 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 17:02:32 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*start;
	const char	*end;

	if (s)
	{
		start = s;
		while (*start == ' ' || *start == '\n' || *start == '\t')
			start++;
		if (*start == '\0')
			return ("");
		end = s + ft_strlen(s) - 1;
		while (*end == ' ' || *end == '\n' || *end == '\t')
			end--;
		return (ft_strsub(s, start - s, end - start + 1));
	}
	return (NULL);
}
