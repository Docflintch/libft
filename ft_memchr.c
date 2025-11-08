/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:14:30 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/08 18:24:53 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int	bol;
	unsigned char *s2;

	i = 0;
	bol = 0;
	s2 = (unsigned char *)s;
	while (bol == 0 && s2[i] && i < n)
	{
		if (s2[i] == c)
			bol = 1;
		i++;
	}
	if (bol == 1)
		return((void *)&s2[i - 1]);
	return(NULL);
}

// int	main(void)
// {
// 	unsigned char s[]= "je ne z sais pas";
// 	void *v1;
// 	void *v2;

// 	v1=ft_memchr(s, 'z', 50);
// 	v2=memchr(s, 'z', 50);
// 	printf("%s\t%s\n",(char *)v1 ,(char *)v2);
// }