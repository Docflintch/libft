/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:26:16 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/10 16:58:49 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s_return;
	size_t	i;

	if (!s)
		return (NULL);
	s_return= ft_calloc(sizeof(char *), len);
	if (!s_return)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_return[i] = s[start + i];
		i++;
	}
	return (s_return);
}

// int	main(void)
// {
// 	printf("%s\n", ft_substr(NULL, 3, 7));
// }