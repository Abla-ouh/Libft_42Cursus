/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:45:42 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/20 21:31:57 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	unsigned long	result;
	int				sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while ((*str != '\0') && (*str >= '0') && (*str <= '9'))
	{
		result = result * 10 + (*str - 48);
		if (result > LONG_MAX && sign == -1)
			return (0);
		if (result > LONG_MAX && sign == 1)
			return (-1);
		str++;
	}
	return (result * sign);
}
