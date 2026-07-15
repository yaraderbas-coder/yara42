/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 11:40:50 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/11 13:01:35 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		length;
	int		x;

	x = 0;
	length = 0;
	while (src[x] != '\0')
	{
		x++;
		length++;
	}
	copy = malloc(length + 1);
	if (!copy)
		return (NULL);
	x = 0;
	while (src[x] != '\0')
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
