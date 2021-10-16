/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:01:15 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/04 15:19:33 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char yazi)
{
	write(1, &yazi, 1);
}

void	ft_is_negative(int ts)
{
	if (ts < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
