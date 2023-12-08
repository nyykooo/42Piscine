/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:53:01 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/06 11:59:02 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_printhex(char npt);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(char npt)
{
	char	base[16];
	int		div;
	int		mod;

	base[0] = '0';
	base[1] = '1';
	base[2] = '2';
	base[3] = '3';
	base[4] = '4';
	base[5] = '5';
	base[6] = '6';
	base[7] = '7';
	base[8] = '8';
	base[9] = '9';
	base[10] = 'a';
	base[11] = 'b';
	base[12] = 'c';
	base[13] = 'd';
	base[14] = 'e';
	base[15] = 'f';
	div = (npt / 16);
	mod = (npt % 16);
	ft_putchar(base[div]);
	ft_putchar(base[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
			i++;
		}
		else if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar('\\');
			ft_printhex(str[i]);
			i++;
		}
	}
}
/*
int	main(void)
{
	char	*str;

	str = "niasdhasodjhasd \nijasbdijbsdas\tashdb";
	ft_putstr_non_printable(str);
	return (0);
}*/
