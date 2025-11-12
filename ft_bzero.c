/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:43:26 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/12 00:16:18 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cast;
	size_t			i;

	i = 0;
	cast = (unsigned char *)s;
	while (i < n)
	{
		cast[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	test[] = NULL;
// 	char	test2[] = NULL;

// 	ft_bzero(test, 9);
// 	printf("%s\n", test);
// 	bzero(test2, 9);
// 	printf("%s\n", test2);
// }