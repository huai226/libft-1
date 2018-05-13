/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshih <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 11:31:22 by sshih             #+#    #+#             */
/*   Updated: 2018/05/13 11:33:53 by sshih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	return (i);
}