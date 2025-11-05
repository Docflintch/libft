/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:14:34 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/04 16:18:17 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int alpha)
{
	return ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122));
}

// int	main(void)
// {
// 	printf("%s\t", "ft_isdigit");
// 	printf("%s\n", "isdigit");
// 	printf("%d\t\t", ft_isdigit('g'));
// 	printf("%d\n", isdigit('g'));
// 	printf("%d\t\t", ft_isdigit('1'));
// 	printf("%d\n", isdigit('1'));
// 	printf("%d\t\t", ft_isdigit(' '));
// 	printf("%d\n", isdigit(' '));
// 	printf("%d\t\t", ft_isdigit('7'));
// 	printf("%d\n", isdigit('7'));
// 	printf("\n");
// 	printf("%d\t\t", ft_isdigit('h'));
// 	printf("%d\n", isdigit('h'));
// 	printf("%d\t\t", ft_isdigit('G'));
// 	printf("%d\n", isdigit('G'));
// 	printf("%d\t\t", ft_isdigit('1'));
// 	printf("%d\n", isdigit('1'));
// 	printf("%d\t\t", ft_isdigit('\n'));
// 	printf("%d\n", isdigit('\n'));
// 	printf("%d\t\t", ft_isdigit(' '));
// 	printf("%d\n", isdigit(' '));
// }