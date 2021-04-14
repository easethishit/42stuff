/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:08:57 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/14 20:02:15 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s); // Mide el tamaño de un str.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	ft_isprint(int c);
int	ft_toupper(int c);
void	ft_bzero(void *s, size_t n);
int	ft_idigit(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
#endif