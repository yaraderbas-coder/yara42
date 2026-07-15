/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 11:18:31 by yderbas           #+#    #+#             */
/*   Updated: 2026/06/27 12:31:02 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	is_edge(int x, int y, int row, int col)
{
	if (row == 1 && (col == 1 || col == x))
		return (1);
	else if (row == y && (col == 1 || col == x))
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (is_edge (x, y, row, col))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
