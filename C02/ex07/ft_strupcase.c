/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:56:49 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/02 15:16:46 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - 32);
			i++;
		}
		else if (str[i] == '\0')
			return (str);
		else
			i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "nicholas";
	char	str2[] = "Nicholas";

	printf("%s is a upper case string\n", ft_strupcase(str));
	printf("%s is a upper case string\n", ft_strupcase(str2));
}*/
