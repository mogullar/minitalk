/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:15:08 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/01 17:15:42 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <stdarg.h>
# include <unistd.h>
# include <signal.h>

void	reciver(int sgn);
int		ft_atoi(const char *str);
void	transmitter(int target_pid, char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putunsigned(unsigned int n);
int		ft_putpointer(void *p);
int		ft_puthexa(unsigned int hexa, char *list);
int		ft_printf(const char *str, ...);

#endif
