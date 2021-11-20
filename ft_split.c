/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:44:02 by abouhaga          #+#    #+#             */
/*   Updated: 2021/11/19 19:08:46 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c && i > 0)
			count++;
	}
	return (count);
}

static void	ft_free(char **strs, int index_of_words)
{
	while (--index_of_words >= 0)
		free(strs[index_of_words]);
	free(strs);
}

static char	**ft_split2(const char *s, char c, char **strs, int n_of_words)
{
	int	i;
	int	j;
	int	index_of_words;

	i = 0;
	index_of_words = 0;
	while (index_of_words < n_of_words)
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		strs[index_of_words] = (char *)malloc(sizeof (char) * (j + 1));
		if (!strs[index_of_words])
		{
			ft_free(strs, index_of_words);
			return (NULL);
		}
		ft_strlcpy(strs[index_of_words], &(s[i]), j + 1);
		i += j;
		index_of_words++;
	}
	strs[index_of_words] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		n_of_words;

	if (!s)
		return (0);
	n_of_words = ft_counter(s, c);
	strs = (char **)malloc(sizeof (char *) * (n_of_words + 1));
	if (!strs)
		return (NULL);
	return (ft_split2(s, c, strs, n_of_words));
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	**strs = ft_split("   hello   world   ", ' ');
// 	for (int i = 0; strs[i]; i++)
// 		printf("%s\n", strs[i]);
// 	return (0);
// }
