/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:14:53 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/13 13:14:57 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	uznuluk;
	unsigned int	sayi;

	uznuluk = 0;
	sayi = 0;
	while (src[uznuluk] != '\0')
		uznuluk++;
	if (size != 0)
	{
		while (src[sayi] != '\0' && sayi < (size - 1))
		{
			dest[sayi] = src[sayi];
			sayi++;
		}
		dest[sayi] = '\0';
	}
	return (uznuluk);
}
