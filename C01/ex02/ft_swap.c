/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:03:21 by ncampbel          #+#    #+#             */
/*   Updated: 2023/07/31 11:11:01 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	memory;	

	memory = *a;
	*a = *b;
	*b = memory;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	ft_swap(&x, &y);
	printf("o novo valor de y eh: %d.\n", y);
	printf("o novo valor de x eh: %d. \n", x);
	return (0);
}*/
