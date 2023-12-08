/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:19:09 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/04 11:41:02 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j +1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1,2,4,7,9,0,3};
	int	size = 7;
	int	i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		if (i < size)
			printf("%d, ", tab[i]);
		i++;
	}
}*/
