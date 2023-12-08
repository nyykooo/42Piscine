/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:39:37 by ncampbel          #+#    #+#             */
/*   Updated: 2023/07/31 11:19:15 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}
/*
int	main(void)
{
	char	*str;

	str = "Nicholas";
	printf("%d", ft_strlen(str));
	return (0);
}*/
