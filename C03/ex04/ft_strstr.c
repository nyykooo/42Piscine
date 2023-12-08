/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:19:29 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/06 19:24:16 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[j] != 0)
	{
		while (str[j + i] == to_find[i] && str[i + j] != 0)
			i++;
		if (to_find[i] == 0)
		{
			return (str + j);
		}
		i = 0;
		j++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "You are a peace of heaven";
	char	to_find[] = "peace";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}*/
