/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:05:08 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/10 11:16:49 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	arguments(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	else
	{
		while (i < argc)
		{
			arguments(argv[i]);
			i++;
		}
	}
	return (0);
}
