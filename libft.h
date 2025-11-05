/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:04:39 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/05 15:36:54 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT
# define FT_LIBFT
# include <stdio.h>
# include <ctype.h>
# include <string.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int alpha);
int	ft_isascii(int ascii);
int	ft_isdigit(int digit);
int	ft_isprint(int print);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s)


#endif