/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:52:22 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/01 17:19:59 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;
	int				negative;

	i = 0;
	result = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
		return (-1);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - '0');
		if (!(str[i] >= 48 && str[i] <= 57))
			return (-1);
		i++;
	}
	return ((int)result * negative);
}

void	transmitter(int target_pid, char c)
{
	int		i;
	char	bit;

	i = 0;
	while (i <= 7) 
	{
		bit = (c >> i) & 1;
		if (bit)
			kill(target_pid, SIGUSR1);
		else
			kill(target_pid, SIGUSR2);
		i++;
		usleep(50);
	}
}

int	main(int argc, char *argv[])
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid == -1)
		{
			ft_printf("%s\n", "PID MUST CONTAINS JUST NUMBERS");
			return (0);
		}
		while (argv[2][i])
		{
			transmitter(pid, argv[2][i]);
			i++;
		}
		return (1);
	}
	else 
	{
		ft_printf("%s\n", "NEED 2 ARGUMENTS");
		return (0);
	}
	return (0);
}
