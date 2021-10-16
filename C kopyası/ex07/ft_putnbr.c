/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:11:59 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/05 14:07:32 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int s)
{
	if (s == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (s < 0)
	{
		ft_putchar('-');
		ft_putnbr(s = -1 * s);
	}
    else
    {
      if(s > 9)
		ft_putnbr(s / 10);
	 ft_putchar(s % 10 + '0');
        
    }
}
 int main ()
{
    ft_putnbr(-21);
}
