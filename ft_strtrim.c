/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:33:12 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/10 19:51:10 by enchueco         ###   ########.fr       */
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
		if (s1 == set[i-1])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		bol;
	char	*total;
	int		tab[2];

	i = 0 ;
	bol = 0;
	while (s1[i++])
	{
		if (verif(s1[i], set) == 0 && bol == 0)
		{
			bol = 1;
			tab[0]= i;
		}
		if	(verif(s1[i], set) == 1 && bol == 1)
			bol = 2;
		if	(verif(s1[i], set) == 0 && bol == 2)
			bol = 1;
		if	(verif(s1[i], set) == 0)
			tab[1] = i;
	}
	total = ft_calloc(tab[1] - tab[0],sizeof(char));
	if	(!total)
		return (NULL);
	return ( (char *)ft_memcpy(total, &s1[tab[0]], ( tab[1] - tab[0])));
}

int	main(void)
{
	printf("%s\n", ft_strtrim("ejejejeejjjdebut ne sais pas debutejeeee", "je"));
}