/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 08:17:09 by oshudria          #+#    #+#             */
/*   Updated: 2017/04/03 10:38:44 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_part_num(const char *s, char c)
{
	size_t	nb;

	nb = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) && *(s + 1) != c)
			nb++;
		s++;
	}
	return (nb == 0 ? nb : nb + 1);
}

static size_t	ft_part_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

static void		ft_free(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(array = (char**)malloc(sizeof(char*) * (ft_part_num(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!(array[i] = ft_strsub(s, 0, ft_part_len(s, c))))
			{
				ft_free(array, i);
				return (NULL);
			}
			s += ft_part_len(s, c);
			i++;
		}
	}
	array[i] = NULL;
	return (array);
}
