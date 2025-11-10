/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:57:43 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/10 19:41:37 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*total;

	if (!s1 && !s2)
		return(NULL);
	if (!s1)
		total = ft_calloc(sizeof(char), ft_strlen(s2) + 1);
	else if (!s2)
		total = ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	else
		total = ft_calloc(sizeof(char), ft_strlen(s2) + ft_strlen(s1) + 1);
	if (!total)
		return (NULL);
	if (!s1)
		ft_memcpy(total, s2, ft_strlen(s2));
	else if (!s2)
		ft_memcpy(total, s1, ft_strlen(s1));
	else
	{
		ft_memcpy(total, s1, ft_strlen(s1));
		ft_memcpy(&total[ft_strlen(s1)], s2, ft_strlen(s2));
	}
	return (total);
}

// int	main(void)
// {
// 	char	*test =ft_strjoin(NULL, "NULL");
// 	printf("%s\n", test);
// 	free(test);
// }