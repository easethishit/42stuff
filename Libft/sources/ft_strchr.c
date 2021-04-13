/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:28:03 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/13 19:35:25 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*sc;

	sc = s;
	while (*sc && *sc != (unsigned char *)c)
		sc++;
	if (*sc == (unsigned char *)c)
		return (*sc);
	return (0);
}
