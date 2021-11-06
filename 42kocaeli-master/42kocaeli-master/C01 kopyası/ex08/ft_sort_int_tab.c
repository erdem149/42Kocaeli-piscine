/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:09:28 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/11 13:35:17 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ters(int *tab, int size)
{
	int	swap;
	int	i;
	int	j;

	j = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	tutan;

	i = 0;
	a = 1;
	while (i <= size)
	{
		while (a < size)
		{
			if (tab[i] > tab[a])
			{
				tutan = tab[a];
				tab[a] = tab[i];
				tab[i] = tutan;
			}		
			a++;
		}
		i++;
		a = 0;
	}
	ters(tab, size);
}
