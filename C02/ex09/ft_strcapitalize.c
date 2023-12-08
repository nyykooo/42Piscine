/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaptalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:02:46 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/05 21:04:10 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] + 32);
		i++;
	}
	j = 0;
	while (str[j] != 0)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = (str[0] - 32);
		if (((str[j] >= 32 && str[j] <= 47) || (str[j] >= 58 && str[j] <= 64)
				|| (str[j] >= 91 && str[j] <= 96)
				|| (str[j] >= 123 && str[j] <= 126))
			&& (str[j + 1] >= 'a' && str[j + 1] <= 'z'))
			str[j + 1] = (str[j + 1] - 32);
		j++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ola, como vai voce? quarenta-e-dois; ou cinquenta+e+cinco";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
