/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:17:17 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/05 21:09:50 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	*str = "Nicholas";
	char	*str2 = "12345";

	printf("%d e %d", ft_str_is_numeric(str), ft_str_is_numeric(str2));
}*/
