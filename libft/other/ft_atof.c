/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:34:03 by oshudria          #+#    #+#             */
/*   Updated: 2017/03/20 10:38:58 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	int			sign;
	double		num;
	double		xpow;

	xpow = 1;
	num = 0;
	sign = 1;
	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\r' || *str == ' ' || *str == '\f')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + *str++ - '0';
	if (*str == '.' && ft_isdigit(*(str + 1)))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		xpow *= 10;
		num += ((*str++ - '0') / xpow);
	}
	return (sign * num);
}
