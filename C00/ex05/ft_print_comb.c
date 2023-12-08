/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:28:27 by ncampbel          #+#    #+#             */
/*   Updated: 2023/07/27 16:22:08 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putcharall(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while(a <= '7')
	{	
		b = a +1;
		while(b <= '8')
		{
			c = b +1;
			while(c <= '9')
			{
				ft_putcharAll(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return(0);
}
*/
