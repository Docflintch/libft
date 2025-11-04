/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:14:34 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/03 17:56:42 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	isalpha(int alpha)
{
	return ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122));
}

int	main(void)
{
	printf("%d\n", isalpha('h'));
	printf("%d\n", isalpha('G'));
	printf("%d\n", isalpha('1'));
	printf("%d\n", isalpha('\n'));
	printf("%d\n", isalpha(' '));
}