/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:34:36 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/05 18:58:35 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (i);
}
/*
int	main(void)
{
	char	src[] = "Nicholas";
	char	dest[] = "";
	unsigned int size = 9;

	printf("the length of src string is %d", ft_strlcpy(dest, src, size));
	printf("%s", dest);
	return (0);
}*/
