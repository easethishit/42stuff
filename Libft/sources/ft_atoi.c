/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:06:17 by elmartin          #+#    #+#             */
/*   Updated: 2021/04/09 21:06:35 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		numero;
	int		negativo;

	numero = 0;
	negativo = 1;
	while (*str == ' ' || *str == '\r' || *str == '\f'
		*str == '\v' || *str == '\n' || *str == '\t')
	{
		str++;
	}
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			negativo *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		numero = numero * 10 + *str - '0';
		str++;
	}
	return (numero * negativo);
}
