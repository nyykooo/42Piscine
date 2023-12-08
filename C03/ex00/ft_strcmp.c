/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:22:44 by ncampbel          #+#    #+#             */
/*   Updated: 2023/08/05 19:07:00 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	diff = 0;
	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if ((s1[i] != 0 && s2[i] == 0) || (s1[i] == 0 & s2[i] != 0))
		return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "Nicholas";
	s2 = "Nicholas";
	s3 = "Nicholxs";
	if (ft_strcmp(s1, s2) == 0)
		printf("%s and %s are equals\n", s1, s2);
	else
		printf("%s and %s aren't equals\n", s1, s2);
	if (ft_strcmp(s1, s3) == 0)
		printf("%s and %s are equals\n", s1, s3);
	else
		printf("%s and %s aren't equals, the difference is %d\n", s1, s3, 
			ft_strcmp(s1, s3));
}*/
