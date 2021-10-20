/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:36:55 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/20 10:37:04 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		e;

	i = 0;
	e = 0;
	while (src[i] != '\0')
		i++;
	p = (char *) malloc(i);
	while (src[e] != '\0')
	{
		p[e] = src[e];
		e++;
	}
	p[e] = '\0';
	return (p);
}
