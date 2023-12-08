/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:36:46 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/02 17:12:14 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str)
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			counter++;
		}
		else if (str[counter] == '\0')
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
/*
int	main(void)
{
	char	*str = "Nicholas";
	char	*str2 = "nicholas";

	if (ft_str_is_lowercase(str) == 1)
		printf("%s is a lower case string\n", str);
	else
		printf("%s isn't a lower case string\n", str);
	if (ft_str_is_lowercase(str2) == 1)
		printf("%s is a lower case string\n", str2);
	else
		printf("%s isn't a lower case string\n", str2);
}*/
