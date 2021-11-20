/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:32:22 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/05 15:58:46 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memchr() function looks for the first occurrence 
//of c within 'n' characters 
//the array pointed to by str.
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	size_t		i;

	s = (const char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
