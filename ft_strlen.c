/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:36:19 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/07 17:25:10 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	printf("%s\t", "ft_strlen");
// 	printf("%s\n", "strlen");
// 	printf("%lu\t\t", ft_strlen(""));
// 	printf("%lu\n", strlen(""));
// 	printf("%lu\t\t", ft_strlen("jdr"));
// 	printf("%lu\n", strlen("jdr"));
// 	printf("%lu\t\t", ft_strlen("1q621h32rdfe1e"));
// 	printf("%lu\n", strlen("1q621h32rdfe1e"));
// }