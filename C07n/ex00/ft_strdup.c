/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:45:43 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/16 15:23:27 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	while (src[i] != 0)
		i++;
	dest = (char *)malloc(i + 1);
	j = 0;
	if (dest == NULL)
		return (NULL);
	while (j < (i + 1))
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "pipipipopopo";
	char	src2[] = "iporporpoarn";
	char	src3[] = "rorororor";
	char	src4[] = "ociacoicaibc";
	char	src5[] = "caicjbaisjcbais";
	char	src6[] = "ahasuhduahbdsa";

	printf("%s\n", ft_strdup(src));
	printf("%s\n", ft_strdup(src2));
	printf("%s\n", ft_strdup(src3));
	printf("%s\n", ft_strdup(src4));
	printf("%s\n", ft_strdup(src5));
	printf("%s\n", ft_strdup(src6));
}*/
