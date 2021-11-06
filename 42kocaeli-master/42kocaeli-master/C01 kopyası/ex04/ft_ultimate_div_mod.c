/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:12:13 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/07 20:15:32 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	kap;
	int	kap2;

	if (*b > 0)
	{
		kap = *a;
		kap2 = *b;
		*a = kap / kap2;
		*b = kap % kap2;
	}
}
