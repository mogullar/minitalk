/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:14:44 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/01 17:14:45 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_putnbr(int nbr)
{
	static char	buffer[11];
	int			i;
	int			x;
	long		num;

	i = 0;
	x = 0;
	num = nbr;
	if (num == 0)
		return (write(1, "0", 1));
	if (num < 0)
	{
		x += write(1, "-", 1);
		num = -num;
	}
	while (num)
	{
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}
	while (i--)
		x += write(1, &buffer[i], 1);
	return (x);
}
