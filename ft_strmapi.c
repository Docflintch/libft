/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:21:53 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/12 03:33:46 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*total;
	int		i;

	total = ft_calloc(sizeof(char), ft_strlen(s));
	i = 0;
	while (s[i])
	{
		total[i] = f(i, s[i]);
		i++;
	}
	return (total);
}

// char	tkt(unsigned int i, char s)
// {
// 	return (s+i);
// }

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("je ne sais pas danser", tkt));
// }