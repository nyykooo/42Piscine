/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:41:31 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/15 19:40:40 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int a)
{
	if (a <= 9)
		ft_putchar(a + 48);
	else if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putchar((a % 10) + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a <= 9)
				ft_putchar(48);
			ft_putnbr(a);
			write(1, " ", 1);
			if (b <= 9)
				ft_putchar(48);
			ft_putnbr(b);
			if (a != 98 || b != 99) 
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
