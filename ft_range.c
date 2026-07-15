/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 13:47:47 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/11 18:20:52 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*a;
	int		x;
	int		length;

	if (min >= max)
		return (NULL);
	length = max - min;
	a = malloc(length * sizeof(int));
	if (!a)
		return (NULL);
	x = 0;
	while (x < length)
	{
		a[x] = min + x;
		x++;
	}
	return (a);
}
