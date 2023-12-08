/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:45:40 by ncampbel          #+#    #+#             */
/*   Updated: 2023/07/27 11:59:56 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		write(1, i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
