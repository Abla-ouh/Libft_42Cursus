/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:37:51 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/07 21:26:38 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc( size_t arr, size_t size )
{
	void	*ptr;

	ptr = (char *)malloc(size * arr);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, arr * size);
	return (ptr);
}
