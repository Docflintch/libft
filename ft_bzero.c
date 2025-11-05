/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:43:26 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/05 14:58:46 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsined char	*cast;
	int	i;

	i = 0;
	cast = (unsined char *)s;
	while (i != n)
	{
		cast[i] = '\0';
		i++;
	}
}