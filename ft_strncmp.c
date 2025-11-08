/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:38:34 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/08 18:54:40 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	total;

	i = 0;
	total = 0;
	while (n >= i && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			total = total + (s1[i] - s2[i]);
		i++;
	}
	if ((!s1[i] || !s2[i]) && n != i)
		total = total + (s1[i] - s2[i]);
	return(total);
}

// int	main(void)
// {
// 	char *test = "testr";
// 	char *test2 = "test";
// 	size_t	i;

// 	i = 5;
// 	printf("%d\t %d\n", ft_strncmp(test, test2, i), strncmp(test, test2, i));
// }