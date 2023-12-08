/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:55:10 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/17 14:33:35 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_verify(char *base)
{
	char **strs;
	
	*strs[0] = "0123456789";
	*strs[1] = "0123456789ABCDEF";
	*strs[2] = "01";
}

void	ft_putnbr_base(int nbr, char *base)
{
	
}

int	main(void)
{
	char	*base;
	int		i;

	i = 13;
	base = "0123456789";
	ft_putnbr_base(i, str);
	return (0);
}
