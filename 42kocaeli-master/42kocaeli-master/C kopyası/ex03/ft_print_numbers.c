/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:27:06 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/04 15:00:00 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char yazi)
{
	write(1, &yazi, 1);
}

void	ft_print_numbers(void)
{
	int	s;

	s = '0';
	while (s <= '9')
	{
		ft_putchar(s);
		s++;
	}
}
