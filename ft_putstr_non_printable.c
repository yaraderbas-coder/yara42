/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 10:11:31 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/06 16:16:09 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char		x;
	int			y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 32 && str[y] <= 126)
			write (1, &str[y], 1);
		else
		{
			write (1, "\\", 1);
			x = (unsigned char)str[y];
			put_char("0123456789abcdef" [x / 16]);
			put_char("0123456789abcdef" [x % 16]);
		}
		y++;
	}
}
int main()
{
	char a[] = "hihi\nhii";
	ft_putstr_non_printable(a);

}
