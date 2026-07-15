/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:50:42 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/04 16:27:05 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
#include <stdio.h>
int main()
{
	int a =15;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);

}
