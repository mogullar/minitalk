/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:14:39 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/01 17:14:40 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_puthexa(unsigned int hexa, char *list)
{
	static char	bump[8];
	int			x;
	int			i;

	i = 0;
	x = 0;
	if (hexa == 0)
		return (write(1, "0", 1));
	while (hexa > 0)
	{
		bump[i] = list[hexa % 16];
		hexa = hexa / 16;
		i++;
	}
	while (i--)
	{
		write(1, &bump[i], 1);
		x++;
	}
	return (x);
}
