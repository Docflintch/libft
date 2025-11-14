/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:41:15 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/14 12:20:22 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		bol;

	i = 0;
	bol = 0;
	count = 0;
	if (!s)
		return (0);
	if (!c)
		return (1);
	while (s[i])
	{
		if (s[i] != c && bol == 0)
		{
			bol = 1;
			count = count + 1;
		}
		if (s[i] == c)
			bol = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab_final;
	size_t	i_str;
	size_t	i_tab;
	size_t	stock;

	i_tab = 0;
	i_str = 0;
	tab_final = ft_calloc(sizeof(char *), (count_word(s, c) + 1));
	if (!s || !tab_final)
		return (NULL);
	while (i_tab < count_word(s, c))
	{
		stock = 0;
		while (s[i_str] == c)
			i_str++;
		while (s[i_str + stock] != c)
			stock++;
		tab_final[i_tab] = ft_calloc(sizeof(char), stock + 1);
		ft_memcpy(tab_final[i_tab], &s[i_str], stock);
		i_str = i_str + stock;
		i_tab++;
	}
	return (tab_final);
}

// int	main(void)
// {
// 	char	**tabstr;
// 	int		i;

// 	i = 0;
// 	 if (!(tabstr = ft_split(NULL, ' ')))
//         printf("%s\n","NULL");
//     else
//     {
//         while (tabstr[i] != NULL)
//         {
//             printf("[%s]\n", tabstr[i]);
//             i++;
//         }
//     }
// }