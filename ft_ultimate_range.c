/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 09:51:15 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/12 10:52:01 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*a;
	int		x;
	int		length;

	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = malloc (length * sizeof (int));
	if (!a)
		return (-1);
	x = 0;
	while (x < length)
	{
		a[x] = min + x;
		x++;
	}
	*range = a;
	return (length);
}
