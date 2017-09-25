/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_link_from_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 12:48:59 by oshudria          #+#    #+#             */
/*   Updated: 2017/05/31 17:51:45 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_link_from_str(char *buf)
{
	int	start;
	int	finish;

	start = 0;
	finish = 0;
	while (buf[start] && buf[start] != '"')
		start++;
	if (buf[start] == '"')
	{
		finish = ++start;
		while (buf[finish] && buf[finish] != '"')
			finish++;
		if (finish > start)
			return (ft_strsub(buf, start, finish - start));
	}
	return (NULL);
}
