/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:11:35 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/13 15:59:51 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	total;

	i = 0;
	nb = 1;
	total = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nb = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + str[i] - '0';
		i++;
	}
	return (total * nb);
}

// int	main(void)
// {
// 	char	*i;

// 	i = "   +12234";
// 	printf("%d\n", ft_atoi(i));
// 	printf("%d\n", atoi(i));
// }