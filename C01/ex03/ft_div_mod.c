/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:35:48 by ncampbel          #+#    #+#             */
/*   Updated: 2023/07/31 11:15:08 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 13;
	b = 5;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d e %d", a, b);
	return (0);
}*/
