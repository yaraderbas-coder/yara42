/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:16:58 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/14 15:15:35 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int	ft_base_length(char *base)
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
int	check_base2(int x, int y, char *base);

int	check_base(char *base)
{
	int	x;
	int	y;

	if (ft_base_length(base) < 2)
		return (0);
	x = 0;
	while (base[x])
	{
		if (base[x] == '+' || base[x] == '-')
			return (0);
		if (base[x] == ' ' || (base[x] >= 9 && base[x] <= 13))
			return (0);
		x++;
	}
	if (check_base2(x, y, base) == 0)
		return (0);
	return (1);
}

int	ft_index(char c, char *base)
{
	int	x;

	x = 0;
	while (base[x])
	{
		if (base[x] == c)
			return (x);
		x++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char*base)
{
	int	result;
	int	x;
	int	sign;

	x = 0;
	result = 0;
	sign = 1;
	if (str[x] == '-')
	{
		sign = -1;
		x++;
	}
	while (str[x])
	{
		result = result * ft_base_length(base)
			+ ft_index(str[x], base);
		x++;
	}
	return (result * sign);
}
char    *ft_itoa_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		number;

	if (!check_base(base_from))
		return (NULL);
	if (!check_base(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(number, base_to);
	return (result);
}
int main()
{
	char*res = ft_convert_base("42", "0123456789", "01");
	if (res != NULL)
	{
		printf("%s\n", res);
		free(res);
	}
	else
	{
		printf("(null)\n");
	}
}
