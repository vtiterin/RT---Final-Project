/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 08:17:26 by oshudria          #+#    #+#             */
/*   Updated: 2016/11/28 14:39:42 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	int				len;
	int				sign;
	unsigned int	n_tmp;
	char			*str;

	len = ft_length(n);
	sign = 1;
	if (n < 0)
	{
		len++;
		sign = -1;
	}
	n_tmp = n * sign;
	if (!(str = ft_strnew(len)))
		return (0);
	else if (n_tmp == 0)
		*str = '0';
	while (n_tmp)
	{
		str[--len] = n_tmp % 10 + '0';
		n_tmp /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
