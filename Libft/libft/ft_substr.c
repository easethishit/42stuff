/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:40:19 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/20 20:48:49 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	sl;
	char		*sc;

	i = 0;
	if (!s)
		return (NULL);
	sl = ft_strlen(s);
	if (sl < start)
	{
		sc = malloc(sizeof(char) * 1);
		if (!sc)
			return (0);
		sc[0] = '\0';
		return (sc);
	}
	sc = malloc(sizeof(char) * (len  - start + 2));
	if (!sc)
		return (0);
	while (i < len)
	{
		sc[i] = s[start + i];
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
