/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:52:09 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/19 16:36:43 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		i++;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static char	*ft_zero(char *str)
{
	str[0] = 48;
	str[1] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nbr;

	nbr = n;
	i = ft_len(nbr);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (nbr == 0)
		return (ft_zero(str));
	if (n < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	str[i] = '\0';
	while (nbr > 0)
	{
		str[i - 1] = 48 + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
