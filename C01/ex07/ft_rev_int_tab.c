/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:36:44 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/06 14:11:42 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	o;

	i = 0;
	o = size - 1;
	while (i <= o)
	{
		temp = tab[i];
		tab[i] = tab[o];
		tab[o] = temp;
		i++;
		o--;
	}
}

int	main(void)
{
	int	tab[] = {1,2,3,4,5,6};
	int	size = 6;
	int	i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		if (i < size)
		printf("%d, ", tab[i]);
		i++;
	}
}
