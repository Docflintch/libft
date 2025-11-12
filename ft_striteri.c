/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 01:07:14 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/12 03:34:21 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	tkt(unsigned int i, char *s)
// {
// 	s[0] = 'a';
// 	i++;
// }

// int	main(void)
// {
// 	char	*test;

// 	test = "je";
// 	ft_striteri(test, tkt);
// 	printf("%s\n", test);
// }