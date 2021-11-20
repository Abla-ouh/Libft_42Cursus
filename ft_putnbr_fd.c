/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:19:06 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/09 20:18:27 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function is exactly the same as our ft_putnbr function except that we
//will be using our ft_putchar_fd function instead of ft_putchar beacuse we 
//will be accepting a parameter for this function that is our file descriptor.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

/*#include <stdio.h>
#include <fcntl.h>

int main()
{
int i;
//open: Used to Open the file for reading, writing or both.
//open(path, flag : ORDWR read and write)
i = open("test", O_RDWR);
ft_putnbr_fd(2, i);
}
*/
