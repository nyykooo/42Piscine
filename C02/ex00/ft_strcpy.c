/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:19:15 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/07 09:39:02 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[count] != 0)
	{
		dest[i] = src[i];
		count++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "Nicholas";
	char	str2[3];

	printf("%s", ft_strcpy(str2, str1));
	return (0);
}*/
