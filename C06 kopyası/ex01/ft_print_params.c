/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:53:12 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/19 14:53:52 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	a;

	a = 1;
	c = 0;
	if (argc > 1)
	{
		while (a < argc)
		{
			c = 0;
			while (argv[a][c] != '\0')
			{
				write(1, &argv[a][c], 1);
				c++;
			}
			a++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
