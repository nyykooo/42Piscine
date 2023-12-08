/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:10:12 by ncampbel          #+#    #+#             */
/*   Updated: 2023/10/06 13:21:39 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "Nichaisabdibsijasd";
	char	str2[] = "Nchaisabdibsijas";
	int	n1;
	int	n2;

	n1 = 8;
	n2 = 130;
	printf("%d", ft_strncmp(str1, str2, n1));
	printf("%d\n", strncmp(str1, str2, n1));
	printf("%d", ft_strncmp(str1, str2, n2));
	printf("%d", strncmp(str1, str2, n2));
}
