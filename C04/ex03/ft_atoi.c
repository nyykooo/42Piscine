/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:44:23 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/09 11:49:56 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (signal % 2)
		return (res);
	return (-res);
}

int	main(void)
{
	char	str[] = "         \n    \t\r\v ----+++-72163152";
	printf("%d", ft_atoi(str));
	return (0);
}
