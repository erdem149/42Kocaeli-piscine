/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:21:17 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/20 18:22:50 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	i;
	int	i2;
	int	i1;

	i = 0;
	i2 = min;
	i1 = 0;
	if (min >= max)
		return (NULL);
	while (i2 < max)
	{
		i1++;
		i2++;
	}
	d = (int *)malloc(i1 * sizeof(int));
	while (min < max)
	{
		d[i] = min;
		min++;
		i++;
	}
	d[i] = '\0';
	return (d);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
