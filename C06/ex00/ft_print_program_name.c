/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:32:22 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/08 14:08:02 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_name(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_name(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
	if (str[i] == 0)
		write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_name(argv[0]);
	return (0);
}
