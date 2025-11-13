/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:19:58 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/13 13:20:02 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_num(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0 || i == 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*total;
	int		i;
	int		zero;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	i = len_num(n);
	total = ft_calloc(sizeof(char), i + 1);
	zero = 0;
	if (n < 0)
	{
		n = -n;
		total[0] = '-';
		zero++;
	}
	i--;
	while (i >= zero)
	{
		total[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (total);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(+129));
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-0));
// 	printf("%s\n", ft_itoa(-1));
// 	printf("%s\n", ft_itoa(-129));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(2147483647));
// }