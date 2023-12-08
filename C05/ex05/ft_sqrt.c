/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:21:13 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/14 17:32:00 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (i == nb / i)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147395600));
}
