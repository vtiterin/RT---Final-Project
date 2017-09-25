/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 11:16:04 by oshudria          #+#    #+#             */
/*   Updated: 2017/04/03 10:38:01 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(char ***tab_ptr)
{
	char	**tmp;
	int		i;

	tmp = *tab_ptr;
	i = 0;
	if (tmp != NULL)
	{
		while (tmp[i] != NULL)
			ft_strdel(&tmp[i++]);
		free(tmp);
		tmp = NULL;
	}
}
