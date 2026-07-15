/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:11:28 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/04 11:26:36 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	temp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		temp = tab[first];
		tab [first] = tab[last];
		tab [last] = temp;
		first++;
		last--;
	}
}
