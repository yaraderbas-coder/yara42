/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderbas <yderbas@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:31:21 by yderbas           #+#    #+#             */
/*   Updated: 2026/07/06 13:55:17 by yderbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	if (str[c] >= 'a' && str[c] <= 'z')
		str[c] = str[c] - 32;
	c = 1;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] = str[c] + 32;
		if (!((str[c - 1] >= 'a' && str[c - 1] <= 'z')
				|| (str[c - 1] >= 'A' && str[c - 1] <= 'Z')
				|| (str[c - 1] >= '0' && str[c - 1] <= '9')))
		{
			if (str[c] >= 'a' && str[c] <= 'z')
				str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
