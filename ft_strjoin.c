/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 12:52:35 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/13 12:53:14 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	length(int size, char **strs)
{
	int		x;
	int		y;
	int		count;

	x = 0;
	count = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			count++;
			y++;
		}
		x++;
	}
	return (count);
}

int	sep_length(char *sep)
{
	int	i;

	i = 0 ;
	while (sep[i])
	{
		i++;
	}
	return (i);
}

char	*copy(char *dst, char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		dst[x] = str[x];
		x++;
	}
	return (dst + x);
}

int	loop(char *tmp, int size, char **strs, char *sep)
{
	int	z;

	z = 0;
	while (z < size)
	{
		tmp = copy(tmp, strs[z]);
		if (z < size -1)
			tmp = copy(tmp, sep);
		z++;
	}
	*tmp = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		sep_size;
	char	*a;
	char	*tmp;

	len = length (size, strs);
	sep_size = sep_length (sep);
	if (size == 0)
	{
		a = malloc(1);
		if (!a)
			return (NULL);
		a[0] = '\0';
		return (a);
	}
	a = malloc(length(size, strs) + sep_length(sep) * (size - 1) + 1);
	if (!a)
		return (NULL);
	tmp = a;
	loop(tmp, size, strs, sep);
	return (a);
}
