/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:56:26 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/16 17:37:41 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_newstr(int size, int len, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	new = (char *)malloc((len + 1) * sizeof(char));
	while (count < len)
	{
		j = 0;
		while (strs[i][j] != 0)
			new[count++] = strs[i][j++];
		j = 0;
		while (sep[j] != 0 && i < (size - 1))
			new[count++] = sep[j++];
		i++;
	}
	new[count] = '\0';
	return (new);
}

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != 0)
			count++;
		j = 0;
		while (sep[j++] != 0 && i < (size - 1))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		len;

	len = ft_strlen(size, strs, sep);
	new = ft_newstr(size, len, strs, sep);
	if (size == 0)
		return (new);
	return (new);
}
/*
int	main(void)
{
	char	*strs[5] = {"Nicholas", "Suifbasijda", "popqowpoqewpeoqw",
					 "62164", "0192381023nakjsnasd"};
	char	*sep = "|";
	int	size = 0;
	int	i;
	int	j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (strs[i][j] != 0)
			j++;
		i++;
		size++;
	}
	printf("%s", ft_strjoin(size, strs, sep));
}*/
