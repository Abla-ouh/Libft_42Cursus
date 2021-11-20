/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:43:53 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/11 22:33:26 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memcpy() is used to copy a block of memory from a location to another. 

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
#include <stdio.h>
int main()
{
	char s1[] = "abcdef";
	printf("%s",ft_memcpy(s1 + 2,s1, 4));
}
*/