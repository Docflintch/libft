/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:33:12 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/11 15:30:48 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	verif(char s1, char const *set)
{
	int	bol;
	int	i;

	bol = 0;
	i = 0;
	while (set[i++])
	{
		if (s1 == set[i - 1])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*total;
	size_t	start_i;
	size_t	end_i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start_i = 0;
	end_i = ft_strlen(s1) - 1;
	while (verif(s1[start_i], set) == 1 && s1[start_i])
		start_i++;
	while (verif(s1[end_i], set) == 1 && s1[end_i] > 0)
		end_i--;
	total = ft_calloc(end_i - start_i + 2, sizeof(char));
	if (!total)
		return (NULL);
	return ((char *)ft_memcpy(total, &s1[start_i], (end_i - start_i + 1)));
}

// int	main(void)
// {
// 	printf("\n%s\t\t", ft_strtrim("1234tkt1234", "1243"));
// 	printf("%s\n\n", ft_strtrim("1234tkt1234", "124"));
// 	printf("%s\t\t", ft_strtrim("1234tkt1234", "43"));
// 	printf("%s\n\n", ft_strtrim("1234tkt1234", ""));
// 	printf("%s\t\t", ft_strtrim("1234tkt1234", NULL));
// 	printf("%s\n\n", ft_strtrim("tkt", "1243"));
// 	printf("%s\n", ft_strtrim(NULL, "1243"));
// 	printf("%s\n", ft_strtrim("", "1243"));
// }