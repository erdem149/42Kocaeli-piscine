/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:17:22 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/20 14:06:17 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	i;
	int	i1;
	int	i2;

	i = 0;
	i1 = 0;
	i2 = min;
	if (min >= max)
		return (NULL);
	while (i2 < max)
	{
		i1++;
		i2++;
	}
	d = (int *)malloc(i1);
	while (min < max)
	{
		d[i] = min;
		min++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
