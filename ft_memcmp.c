/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:28:15 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/08 19:50:33 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int	total;
	unsigned char	*string1;
	unsigned char	*string2;

	i = 0;
	total = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (n > i && string1[i] && string2[i])
	{
		if (string1[i] != string2[i])
			total = total + (string1[i] - string2[i]);
		i++;
	}
	if ((!string1[i] || !string2[i]) && n != i )
		total = total + (string1[i] - string2[i]);
	return(total);
}

// int	main(void)
// {
// 	char *test = "testr";
// 	char *test2 = "test";
// 	size_t	i;

// 	i = 4;
// 	printf("%d\t %d\n", ft_memcmp(test, test2, i), memcmp(test, test2, i));
// }