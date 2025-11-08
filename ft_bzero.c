/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:43:26 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/07 18:39:26 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cast;
	size_t	i;

	i = 0;
	cast = (unsigned char *)s;
	i = (size_t)s;
	while (i != n)
	{
		cast[i] = '\0';
		i++;
	}
}