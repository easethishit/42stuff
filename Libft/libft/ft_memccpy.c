/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:22:05 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/15 18:03:38 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*sd;
	char	*ss;
	void	*result;

	i = 0;
	ss = (char *)src;
	sd = (char *)dst;
	while (n--)
	{
		sd[i] = ss[i];
		if (ss[i] == (unsigned char)c)
		{	
			result = &sd[i];	
			return (result);
		}
		i++;
	}
	return (dst);
}
