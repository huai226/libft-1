/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshih <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 18:26:19 by sshih             #+#    #+#             */
/*   Updated: 2018/05/10 14:45:06 by sshih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (s2[y] == '\0')
		return ((char *)s1);
	while (s1[x] != '\0')
	{
		y = 0;
		while (s2[y] == s1[x + y])
		{
			if (s2[y + 1] == '\0')
				return ((char *)s1 + x);
			y++;
		}
		x++;
	}
	return (0);
}
