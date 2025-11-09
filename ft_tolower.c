/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:39:43 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:11:15 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 32);
	return (c);
}
// int	main(void)
// {
// 	printf("%c %c\n", ft_tolower('r'), tolower('r'));
// 	printf("%c %c\n", ft_tolower('a'), tolower('a'));
// 	printf("%c %c\n", ft_tolower('+'), tolower('+'));
// 	printf("%c %c\n", ft_tolower('A'), tolower('A'));
// 	printf("%c %c\n", ft_tolower('.'), tolower('.'));
// 	printf("%c %c\n", ft_tolower('<'), tolower('<'));
// 	printf("%c %c\n", ft_tolower('T'), tolower('T'));
// 	printf("%c %c\n", ft_tolower('K'), tolower('K'));
// 	printf("%c %c\n", ft_tolower('Q'), tolower('Q'));
// }