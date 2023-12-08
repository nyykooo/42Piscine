/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:06:46 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/05 21:09:06 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else if (str[i] == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = "Nicholas";
	str2 = "C3P0";
	if (ft_str_is_alpha(str) == 1)
		printf("%s contains only alphabetical characteres\n", str);
	else
		printf("%s contains non alphabetical characteres\n", str);
	if (ft_str_is_alpha(str2) == 1)
		printf("%s contains only alphabetical characteres\n", str2);
	else
		printf("%s contains non alphabetical characteres\n", str2);
}*/
