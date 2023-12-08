/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:57:21 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/09 13:06:50 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0 && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "Oi eu sou o ";
	char	str3[] = "Nicholas";
	int	nb = 4;
	
	printf("%s\n", ft_strncat(str1, str3, nb));
//	printf("%s", strncat(str1, str3, nb));
}*/
