/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:18:45 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/20 15:20:33 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	slen;
	size_t	dlen;
	size_t	total;

	slen = ft_strlen(src);
	if (!dst && size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen < size)
		total = slen + dlen;
	else
		return (slen + size);
	j = 0;
	while (src[j] && dlen + 1 < size)
		dst[dlen++] = src[j++];
	dst[dlen] = '\0';
	return (total);
}
