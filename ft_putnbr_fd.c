/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 03:24:43 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/12 03:39:36 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	stokage[100000];
	long	i;
	int		final;
	long	nb;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb >= 10 || nb <= -10)
	{
		stokage[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	stokage[i] = nb;
	while (i >= 0)
	{
		final = stokage[i] + '0';
		write(fd, &final, 1);
		i--;
	}
}
