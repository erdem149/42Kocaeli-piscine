/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:10:39 by eryilmaz          #+#    #+#             */
/*   Updated: 2021/10/13 13:10:42 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z')
		&& !(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		bosluk;

	bosluk = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			bosluk = 1;
		}
		else
		{
			if (bosluk == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (bosluk == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			bosluk = 0;
		}
		i++;
	}
	return (str);
}
