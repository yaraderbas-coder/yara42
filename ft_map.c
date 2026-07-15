/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 11:34:11 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/07 13:06:40 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	c;
	int	*arr;

	arr = malloc(length * sizeof(int));
	c = 0;
	while (c < length)
	{
		tab[c] = f(tab[c]);
		arr[c] = tab[c];
		c++;
	}
	return (arr);
}
