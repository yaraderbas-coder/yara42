/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:29:21 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/14 13:54:38 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	check_base2(int x, int y, char *base)
{
	x = 0;
	while (base[x])
	{
		y = x + 1;
		while (base[x])
		{
			if (base[x] == base[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	ft_base_len(char *base)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (base[x])
	{
		count++;
		x++;
	}
	return (count);
}

int	count_digits(int nbr, char *base)
{
	long	nb;
	int		count;

	nb = nbr;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	count = 0;
	while (nb != 0)
	{
		count++;
		nb = nb / ft_base_len(base);
	}
	return (count);
}

void	put_result(char *result, int nbr, char *base, int length)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		result[length - 1] = base[nb % ft_base_len(base)];
		nb = nb / ft_base_len(base);
		length--;
	}
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*result;
	long	nb;
	int		length;

	nb = nbr;
	length = count_digits(nb, base);
	if (nb < 0)
		length++;
	result = malloc (sizeof(char) * length + 1);
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (nb == 0)
	{
		result[0] = base[0];
		return (result);
	}
	put_result(result, nb, base, length);
	if (nb < 0)
		result[0] = '-';
	return (result);
}
