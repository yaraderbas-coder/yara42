/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 14:16:47 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/07 14:58:40 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	x;
	int	count;

	x = 0;
	while (x < length)
	{
		if (f(tab[x]) != 0)
			count++;
		x++;
	}
	return (count);
}
