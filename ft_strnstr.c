/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:07:56 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:16:35 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;
	int		bol;

	i = 0;
	y = 0;
	bol = 0;
	if (little == NULL || big == NULL)
		return (NULL);
	while (i < len && big[i] && little[y] && bol == 0)
	{
		y = 0;
		while (big[i + y] == little[y] && (i + y) < len)
			y++;
		if (y == ft_strlen(little))
			bol = 1;
		i++;
	}
	if (bol == 1)
		return ((char *)&big[i - 1]);
	return (NULL);
}

// int	main(void)
// {
// 	char	*txt = NULL;
// 	char	*shr = "NULL";
// 	int	range = 5;
// 	printf("%s\t\t%s\n", ft_strnstr(txt, shr, range), strnstr(txt, shr, range));
// }