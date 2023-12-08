/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:22:56 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/10 11:21:45 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);
void	arguments(char *str);

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

	i = argc - 1;
	if (argc == 1)
		return (0);
	else 
	{
		while (i > 0)
		{
			arguments(argv[i]);
			i--;
		}
	}
}
