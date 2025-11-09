/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:27:14 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 16:58:50 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)));
}

// int	main(void)
// {
// 	printf("%s\t", "ft_isalum");
// 	printf("%s\n", "isalum");
// 	printf("%d\t\t", ft_isalnum('g'));
// 	printf("%d\n", isalnum('g'));
// 	printf("%d\t\t", ft_isalnum('1'));
// 	printf("%d\n", isalnum('1'));
// 	printf("%d\t\t", ft_isalnum(' '));
// 	printf("%d\n", isalnum(' '));
// 	printf("%d\t\t", ft_isalnum('7'));
// 	printf("%d\n", isalnum('7'));
// 	printf("\n");
// 	printf("%d\t\t", ft_isalnum('h'));
// 	printf("%d\n", isalnum('h'));
// 	printf("%d\t\t", ft_isalnum('G'));
// 	printf("%d\n", isalnum('G'));
// 	printf("%d\t\t", ft_isalnum('1'));
// 	printf("%d\n", isalnum('1'));
// 	printf("%d\t\t", ft_isalnum('\n'));
// 	printf("%d\n", isalnum('\n'));
// 	printf("%d\t\t", ft_isalnum(' '));
// 	printf("%d\n", isalnum(' '));
// 	printf("%d\t\t", ft_isalnum(NULL));
// 	printf("%d\n", isalnum(NULL));
// }