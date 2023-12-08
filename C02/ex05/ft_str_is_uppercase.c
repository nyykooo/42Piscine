/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:55:16 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/02 17:13:38 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str)
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			counter++;
		else if (str[counter] == '\0')
			return (1);
		else
			return (0);
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = "NICHOLAS";
	str2 = "NiCHOLAS";
	if (ft_str_is_uppercase(str) == 1)
		printf("%s is an uppercase string\n", str);
	else
		printf("%s ins't an uppercase string\n", str);
	if (ft_str_is_uppercase(str2) == 1)
		printf("%s is an uppercase string\n", str2);
	else
		printf("%s isn't an uppercase string\n", str2);
}*/
