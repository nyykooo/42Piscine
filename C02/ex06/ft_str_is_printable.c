/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:30:23 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/04 11:46:45 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	count;
	int	is_printable;

	count = 0;
	is_printable = 3;
	while (str)
	{
		if (str[count] >= 32 && str[count] <= 126)
			count++;
		else if (str[count] == 0)
		{
			is_printable = 1;
			return (is_printable);
		}
		else
		{
			is_printable = 0;
			return (is_printable);
		}
	}
	return (0);
}
/*
int	main(void)
{
	//char	str[];
	//char	str2[];

	char	str[] = "Nicholas";
	char	str2[] = "";
	if (ft_str_is_printable(str) == 1)
		printf("%s is a printable string\n", str);
	else
		printf("%s isn't a printable string\n", str);
	if (ft_str_is_printable(str2) == 1)
		printf("%s is a printable string\n", str2);
	else
		printf("%s isn't a printable string\n", str2);
	return (0);
}*/
