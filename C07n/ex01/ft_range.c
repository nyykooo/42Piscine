/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:08:59 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/17 10:45:15 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc(size * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	i;
	int	max;
	int	min;
	int	*tab;

	max = 50;
	min = 45;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ,", tab[i]);
		i++;
	}
	printf("\n%d", i);
	return 0;
}*/
