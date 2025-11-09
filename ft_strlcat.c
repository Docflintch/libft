/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:25:05 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:10:16 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (size < len)
		return ((ft_strlen(src) + (len - (len - size))));
	while ((size - len) > i + 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return ((ft_strlen(src) + len));
}

// int	main(void)
// {
// 	char original[] = "je veux du chocolat noir tkt";
// 	char *coppy = malloc(sizeof(char)*21);
// 	ft_memset(coppy, 't', 4);
// 	printf("%zu %s\n", ft_strlcat(coppy , original , 18), coppy);
// 	char original2[] = "je veux du chocolat noir tkt";
// 	char *coppy2 = malloc(sizeof(char)*21);
// 	ft_memset(coppy2, 't', 4);
// 	printf("%zu %s\n", strlcat(coppy2 , original2 , 18), coppy2);
// 	free(coppy);
// 	free(coppy2);
// }