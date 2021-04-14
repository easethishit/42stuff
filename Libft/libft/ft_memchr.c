/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:04:18 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/14 20:19:19 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sc;
	size_t			i;

	sc = (char *)s;
	i = 0;
	while (i < n && sc[i] != (char)c)
		i++;
	if (sc[i] == (char)c)
		return (sc + i);
	return (0);
}