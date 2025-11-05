/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:05:12 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/04 16:35:29 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int print)
{
	return((print >= 32 && print <= 126));
}
// int	main(void)
// {
// 	printf("%s\t", "ft_isprint");
// 	printf("%s\n", "isprint");
// 	printf("%d\t\t", ft_isprint('g'));
// 	printf("%d\n", isprint('g'));
// 	printf("%d\t\t", ft_isprint('1'));
// 	printf("%d\n", isprint('1'));
// 	printf("%d\t\t", ft_isprint(' '));
// 	printf("%d\n", isprint(' '));
// 	printf("%d\t\t", ft_isprint('7'));
// 	printf("%d\n", isprint('7'));
// 	printf("\n");
// 	printf("%d\t\t", ft_isprint('h'));
// 	printf("%d\n", isprint('h'));
// 	printf("%d\t\t", ft_isprint('G'));
// 	printf("%d\n", isprint('G'));
// 	printf("%d\t\t", ft_isprint('1'));
// 	printf("%d\n", isprint('1'));
// 	printf("%d\t\t", ft_isprint('\n'));
// 	printf("%d\n", isprint('\n'));
// 	printf("%d\t\t", ft_isprint(' '));
// 	printf("%d\n", isprint(' '));
// 	printf("\n");
// 	printf("%d\t\t", ft_isprint(1));
// 	printf("%d\n", isprint(1));
// 	printf("%d\t\t", ft_isprint(8));
// 	printf("%d\n", isprint(8));
// 	printf("%d\t\t", ft_isprint(11));
// 	printf("%d\n", isprint(11));
// 	printf("%d\t\t", ft_isprint(9));
// 	printf("%d\n", isprint(9));
// 	printf("\n");
// 	printf("%d\t\t", ft_isprint(127));
// 	printf("%d\n", isprint(127));
// 	printf("%d\t\t", ft_isprint(31));
// 	printf("%d\n", isprint(31));
// 	printf("%d\t\t", ft_isprint(25));
// 	printf("%d\n", isprint(22));
// 	printf("%d\t\t", ft_isprint(101));
// 	printf("%d\n", isprint(101));
// }