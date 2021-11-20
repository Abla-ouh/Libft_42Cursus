/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:37:05 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/12 03:01:39 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*This function allocates memory and returns a new string terminated by a '\0'
 * which is the result of a concatenation of the parameters s1 and s2. If the
 * allocation fails the function will return NULL.*/
/*We begin by declaring three variables. The first two will be counters we
 * will use to move through the strings. The third is the new string that
 * we will be allocating memory to in order to return the concatenation of
 * our parameter strings.*/
/*We set both of the counter variables to 0 since we will want both
 * counters to start at the beginning of their respective strings. We then
 * allocate memory using the malloc function with a combination of using
 * our previously made ft_strlen functions. We use the ft_strlen function
 * on both the parameter strings to figure out the full length for a 
 * concatenation and we add 1 to this added length to make sure we can
 * add a '\0'. If the allocation failed we will return NULL.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = ((char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}	
// #include <stdio.h>
// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "world";
// 	printf("%s", ft_strjoin(s1, s2));
// }
