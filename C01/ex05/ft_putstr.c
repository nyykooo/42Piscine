/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:08:04 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/02 10:55:34 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, &*str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "O Bruno e um cara legal";
	ft_putstr(str);
	return (0);
}*/
