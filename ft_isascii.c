/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:05:12 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/04 16:19:38 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ascii)
{
	return((ascii >= 0 && ascii <= 127));
}
// int	main(void)
// {
// 	printf("%s\t", "ft_isascii");
// 	printf("%s\n", "isascii");
// 	printf("%d\t\t", ft_isascii('g'));
// 	printf("%d\n", isascii('g'));
// 	printf("%d\t\t", ft_isascii('1'));
// 	printf("%d\n", isascii('1'));
// 	printf("%d\t\t", ft_isascii(' '));
// 	printf("%d\n", isascii(' '));
// 	printf("%d\t\t", ft_isascii('7'));
// 	printf("%d\n", isascii('7'));
// 	printf("\n");
// 	printf("%d\t\t", ft_isascii('h'));
// 	printf("%d\n", isascii('h'));
// 	printf("%d\t\t", ft_isascii('G'));
// 	printf("%d\n", isascii('G'));
// 	printf("%d\t\t", ft_isascii('1'));
// 	printf("%d\n", isascii('1'));
// 	printf("%d\t\t", ft_isascii('\n'));
// 	printf("%d\n", isascii('\n'));
// 	printf("%d\t\t", ft_isascii(' '));
// 	printf("%d\n", isascii(' '));
// }