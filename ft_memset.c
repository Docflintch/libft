/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:53:20 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:07:28 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*change;
	size_t			i;

	change = (unsigned char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (n != i)
	{
		change[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char txt[] = "je veux copier tod :|";
// 	char txt2[] = "je veux copier tod :|";

// 	ft_memset(&txt[8], '!', 6);
// 	memset(&txt2[8], '!', 6);
// 	printf("%s\t", txt);
// 	printf("%s\n", txt2);
// }