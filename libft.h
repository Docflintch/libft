/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:04:39 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/07 17:34:34 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT
# define FT_LIBFT
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <bsd/string.h>
# include <stdlib.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int alpha);
int	ft_isascii(int ascii);
int	ft_isdigit(int digit);
int	ft_isprint(int print);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest , const char *src , size_t size );
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int	c);
int	ft_toupper(int	c);

#endif