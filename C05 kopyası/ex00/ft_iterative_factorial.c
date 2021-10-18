/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:30:33 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/18 10:34:43 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	t;

	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
		return (0);
	a = 1;
	t = 1;
	while (a <= nb)
	{
		t = t * a;
		a++;
	}
	return (t);
}
