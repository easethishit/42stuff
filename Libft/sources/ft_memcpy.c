/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:28:09 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/12 20:37:04 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*sd;
	char	*ss;

	i = 0;
	ss = (char *)src;
	sd = (char *)dst;
	while (n--)
	{
		sd[i] = ss[i];
		i++;
	}
	return (dst);
}
