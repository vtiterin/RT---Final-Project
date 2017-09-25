/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 08:12:01 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 16:35:55 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*fresh;
	unsigned int	i;

	if (s != 0)
	{
		fresh = ft_strnew(ft_strlen(s));
		if (!fresh)
			return (NULL);
		i = 0;
		while (*(s + i))
		{
			*(fresh + i) = f(*(s + i));
			i++;
		}
		return (fresh);
	}
	return ((char*)s);
}
