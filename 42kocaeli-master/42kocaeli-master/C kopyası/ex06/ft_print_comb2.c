/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:11:33 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/05 11:05:35 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char yazi)
{
	write(1, &yazi, 1);
}

void	ft_print_comb2(void)
{
	char	i1;
	char	i2;

	i1 = 0;
	i2 = 0;
	while (i1 <= 99)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			ft_putchar(i1 / 10 + '0');
			ft_putchar(i1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(i2 / 10 + '0');
			ft_putchar(i2 % 10 + '0');
			i2++;
			if (i1 != 98)
				write(1, ", ", 2);
		}
		i1++;
	}
}
