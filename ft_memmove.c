/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:43:37 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:09:37 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cast_dest;
	const unsigned char	*cast_src;
	size_t				i;

	i = 0;
	cast_dest = (unsigned char *)dest;
	cast_src = (const unsigned char *)src;
	if (!cast_dest || !cast_dest)
		return (NULL);
	if (dest > src)
	{
		while (n--)
			cast_dest[n] = cast_src[n];
	}
	else
	{
		while (n != i)
		{
			cast_dest[i] = cast_src[i];
			i++;
		}
	}
	return (dest);
}
// int	main(void)
// {
// 	char ft_memmove1[] = "abcdefgh";
// 	// char ft_memmove2[] = "j'aime maxence mais que quand c necesaire";
// 	char memmove3[] = "abcdefgh";
// 	// char memmove2[] = "j'aime maxence mais que quand c necesaire";

// 	ft_memmove(ft_memmove1 + 3, ft_memmove1, 6);
// 	memmove(memmove3 + 3, memmove3, 6);
// 	printf("%s\t", ft_memmove1);
// 	printf("%s\n", memmove3);
// }