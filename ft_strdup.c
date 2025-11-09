/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:17:02 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/09 19:30:52 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	if (!s)
		return (NULL);
	dup = ft_calloc(sizeof(const char *), ft_strlen(s));
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

// int	main(void)
// {
// 	char	*base = "t";
// 	char	*coppy;
// 	coppy = ft_strdup(base);
// 	printf("%s\n", coppy);
// 	free(coppy);
// 	// coppy = strdup(base);
// 	// printf("%s\n", coppy);
// 	// free(coppy);
// }