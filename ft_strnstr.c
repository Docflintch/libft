/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:07:56 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/08 19:50:25 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;
	int	bol;

	i = 0;
	bol = 0;
	while (i < len && big[i] && little[y] && bol == 0)
	{
		y = 0;
		while (big[i + y] == little[y])
			y++;
		if (y == ft_strlen(little))
			bol = 1;
	}
	if (bol == 1)
		return ((char *)&big[i]);
	return(NULL);
}

int	main(void)
{
	printf("%s\t%s\n", ft_strnstr("Foo Bar Baz", "Bar", 7), strnstr("Foo Bar Baz", "Bar", 7));
}