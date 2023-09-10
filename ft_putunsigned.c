/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:14:57 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/01 17:14:58 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_putunsigned(unsigned int num)
{
	static char	p[10];
	int			i;
	int			x;

	i = 0;
	x = 0;
	if (num == 0)
		return (write (1, "0", 1));
	while (num > 0)
	{
		p[i] = num % 10 + 48;
		num = num / 10;
		i++;
	}
	while (i--)
	{
		write(1, &p[i], 1);
		x++;
	}
	return (x);
}
