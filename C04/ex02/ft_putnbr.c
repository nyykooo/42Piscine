/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:27:18 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/08 13:23:47 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	answ;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
	{
		answ = (nb + 48);
		write(1, &answ, 1);
	}
}
/*
int	main(void)
{
	int	nbr;
	int	nbr2;

	nbr = -2147483648;
	nbr2 = -123183;
	ft_putnbr(nbr);
	printf("\n");
	ft_putnbr(nbr2);
}*/
