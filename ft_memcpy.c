/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:37:30 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:08:56 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cast_dest;
	const unsigned char	*cast_src;
	size_t				i;

	i = 0;
	cast_dest = (unsigned char *)dest;
	cast_src = (const unsigned char *)src;
	if (!cast_dest || !cast_dest)
		return (NULL);
	while (n != i)
	{
		cast_dest[i] = cast_src[i];
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char ft_memcpy1[] = "je veux copier tod :|";
// 	// char ft_memcpy2[] = "j'aime maxence mais que quand c necesaire";
// 	char memcpy3[] = "je veux copier tod :|";
// 	// char memcpy2[] = "j'aime maxence mais que quand c necesaire";

// 	ft_memcpy(ft_memcpy1 + 2, ft_memcpy1, 14);
// 	memcpy(memcpy3 + 2, memcpy3, 14);
// 	printf("%s\t", ft_memcpy1);
// 	printf("%s\n", memcpy3);
// }