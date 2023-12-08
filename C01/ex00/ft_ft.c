/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:02:23 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/14 15:58:26 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int 	**nbr;

	ft_ft(&nbr);
	printf("O valor dentro do pointer e: %d.", &nbr);
	return (0);
}
