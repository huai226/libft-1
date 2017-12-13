/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slin <linsheng4522010@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 20:09:25 by slin              #+#    #+#             */
/*   Updated: 2017/12/11 20:21:51 by slin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int tmp;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	tmp = 1;
	while (nb > 0)
	{
		tmp = tmp * nb--;
	}
	return (tmp);
}
