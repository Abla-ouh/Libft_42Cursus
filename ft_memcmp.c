/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:19:28 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/05 14:39:33 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function memcmp() compares the first n characters of 
//buffer1 and buffer2 (temporary storage). 
//The return value is the difference
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if ((s1[i] - s2[i]) != 0)
			return ((s1[i] - s2[i]));
		i++;
	}
	return (0);
}
