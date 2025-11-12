/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:37:13 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/12 04:32:49 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cal;

	cal = malloc(nmemb * size);
	if (!cal)
		return (NULL);
	if (nmemb * size > 2147483647)
	{
		free(cal);
		return (NULL);
	}
	ft_bzero(cal, (nmemb * size));
	return (cal);
}

// int	main(void)
// {
// 	char	*test;
// 	int	i;

// 	i = 0;
// 	test = ft_calloc(sizeof(char),4);
// 	while(i < 1)
// 	{
// 		test[i] = 'u';
// 		i++;
// 	}
// 	printf("%s\n", test);
// 	free(test);
// }