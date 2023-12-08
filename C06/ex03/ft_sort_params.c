/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:43:20 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/10 13:52:21 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort(char **str1, char **str2);
void	ftputchar(char *str);
int		compare(char *str1, char *str2);

void	sort(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ftputchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] != 0 || str2[i] != 0) && (str1[i] == str2[i]))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (compare(argv[j], argv[j + 1]) > 0)
				sort(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ftputchar(argv[i]);
		i++;
	}
}
