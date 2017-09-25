/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxcomdiv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 15:23:03 by oshudria          #+#    #+#             */
/*   Updated: 2017/02/21 15:39:45 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxcomdiv(int a, int b)
{
	int	max_div;

	max_div = 0;
	if (a == 0 || b == 0)
		return (0);
	else if (a == b)
		return (a);
	else if (MAX(a, b) % MIN(a, b) == 0)
		return (MIN(a, b));
	max_div = MIN(ABS(a), ABS(b)) / 2;
	if (max_div == 0 || (a % max_div == 0 && b % max_div == 0))
		return (max_div);
	while (a % max_div != 0 || b % max_div != 0)
		max_div -= 1;
	return (max_div);
}
