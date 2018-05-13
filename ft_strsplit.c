/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshih <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 13:59:59 by sshih             #+#    #+#             */
/*   Updated: 2018/05/13 11:13:32 by sshih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **new;
	int i;
	int j;

	if (!s)
		return (NULL);
	new = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		if (s[j] != '\0' && s[j] != c)
		{
			new[i] = ft_malloc_word(s, c, j);
			i++;
			while (s[j] != c && s[j] != '\0')
				j++;
		}
	}
	new[i] = 0;
	return (new);
}
// static int		ft_countwords(char const *str, char c)
// {
// 	int i;

// 	i = 0;
// 	while (*str)
// 	{
// 		if (*str == c)
// 			str++;
// 		else
// 		{
// 			i++;
// 			while (*str && *str != c)
// 				str++;
// 		}
// 	}
// 	return (i);
// }

// static char		*ft_malloc_word(char const *str, char c, int j)
// {
// 	char *word;
// 	int i;
// 	int count;
// 	int tmp;

// 	count = 0;
// 	tmp = j;
// 	while (str[tmp] != c && str[tmp] != '\0')
// 	{
// 		tmp++;
// 		count++;
// 	}
// 	if (!(word = (char*)malloc(sizeof(char) * (count + 1))))
// 		return (NULL);
// 	i = 0;
// 	while (str[j] != c && str[j] != '\0')
// 	{
// 		word[i] = str[j];
// 		i++;
// 		j++;
// 	}
// 	word[i] = '\0';
// 	return (word);
// }


