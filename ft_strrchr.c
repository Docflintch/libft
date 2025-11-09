/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:11:46 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 17:13:25 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	bol;
	int	len;

	bol = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (bol == 0 && len != 0)
	{
		if (s[len] == c)
			bol = 1;
		len--;
	}
	if (bol == 1)
		return ((char *)&s[len + 1]);
	return (NULL);
}

// int	main(void)
// {
// 	const char *s = "je veux que zle pc tourne a z fond";
// 	printf("%s\n%s\n\n\n", ft_strrchr(s, 'z'), strrchr(s, 'z'));
// 	printf("%s\n%s\n", ft_strrchr(s, 'p'), strrchr(s, 'p'));
// }