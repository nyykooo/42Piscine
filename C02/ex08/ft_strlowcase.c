/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:57:26 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/05 18:54:14 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else if (str[i] == 0)
			return (str);
		else
			i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "NICholas";
	char	str2[] = "NiC5HOLAS";

	printf("%s is a lower case string\n", ft_strlowcase(str));
	printf("%s is a lower case string\n", ft_strlowcase(str2));
}*/
