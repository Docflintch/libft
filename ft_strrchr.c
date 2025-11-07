/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:11:46 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/07 17:33:48 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	bol;
	int	len;

	bol = 0;
	len = ft_strlen(s);
	while (bol == 0 && len != 0)
	{
		if (s[len] == c)
			bol = 1;
		len--;
	}
	if (bol == 1)
		return((char *)&s[len + 1]);
	return(NULL);
}

// int	main(void)
// {
// 	const char *s = "je veux que zle pc tourne a fond et il ne frise zpas avec spotify";
// 	printf("%s\n%s\n\n\n", ft_strrchr(s, 'z'), strrchr(s, 'z'));
// 	printf("%s\n%s\n", ft_strrchr(s, 'p'), strrchr(s, 'p'));
// }