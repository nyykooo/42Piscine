/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:21:30 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/17 10:43:25 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	l = max - min;
	*range = (int *)malloc(l * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < l)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (l);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;
	int	size;

	min = 8451;
	max = 65465465;
	i = 0;
	size = ft_ultimate_range(&range, min, max);
	printf("the size of range is %d.\n", size);
	return (0);
}*/
