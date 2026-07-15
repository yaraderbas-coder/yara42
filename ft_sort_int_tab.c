/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:27:46 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/04 12:09:33 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	c;
	int	i;

	i = 0;
	while (i < size)
	{
		c = i + 1;
		while (c < size)
		{
			if (tab[i] > tab[c])
			{
				swap = tab[i];
				tab[i] = tab[c];
				tab[c] = swap;
			}
			c++;
		}
		i++;
	}
}
