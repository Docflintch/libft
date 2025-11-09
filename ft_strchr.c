/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:43:31 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:12:41 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	bol;

	i = 0;
	bol = 0;
	if (!s)
		return (NULL);
	while (bol == 0 && s[i])
	{
		if (s[i] == c)
			bol = 1;
		i++;
	}
	if (bol == 1)
		return ((char *)&s[i - 1]);
	return (NULL);
}

// int	main(void)
// {
// 	const char *s = "je veux que zle pc tourne a z fond";
// 	printf("%s\n%s\n\n\n", ft_strchr(s, 'z'), strchr(s, 'z'));
// 	printf("%s\n%s\n", ft_strchr(s, 'p'), strchr(s, 'p'));
// }