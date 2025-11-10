/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:57:43 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/10 17:22:39 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*total;
	size_t	i;
	size_t	y;
	int	bol;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	total = ft_calloc(sizeof(char *), len);
	if (!total)
		return (NULL);
	i = 0;
	y = 0;
	bol = 0;
	while (s1[i])
	{
		total[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		total[i + y] = s2[y];
		y++;
	}
	return (total);
}

// int	main(void)
// {
// 	char	*test =ft_strjoin("je ne sais pas pk ", "je ne suis pas accept");
// 	printf("%s\n", test);
// 	free(test);
// }