/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:29:40 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/07 16:40:01 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int	c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	printf("%c %c\n", ft_toupper('r'), toupper('r'));
// 	printf("%c %c\n", ft_toupper('a'), toupper('a'));
// 	printf("%c %c\n", ft_toupper('+'), toupper('+'));
// 	printf("%c %c\n", ft_toupper('A'), toupper('A'));
// 	printf("%c %c\n", ft_toupper('.'), toupper('.'));
// 	printf("%c %c\n", ft_toupper('<'), toupper('<'));
// 	printf("%c %c\n", ft_toupper('T'), toupper('T'));
// 	printf("%c %c\n", ft_toupper('K'), toupper('K'));
// 	printf("%c %c\n", ft_toupper('Q'), toupper('Q'));
// }