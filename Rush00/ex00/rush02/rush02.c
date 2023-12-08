/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:40:04 by ncampbel          #+#    #+#             */
/*   Updated: 2023/07/30 17:12:33 by gucoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
void	loop1(int i, int j, int *vx);
void	loop2(int i, int j, int *vx, int *vy);
void	loop3(int i, int j, int *vx, int *vy);

void	loop1(int i, int j, int *vx)
{
	if (i == 0 && j == 0)
	{
		ft_putchar('A');
		i++;
	}
	while (j == 0 && i > 0 && (i < (*vx - 1)) && i != 0)
	{
		ft_putchar('B');
		i++;
	}
	if (j == 0 && i == (*vx - 1))
		ft_putchar('C');
}

void	loop2(int i, int j, int *vx, int *vy)
{
	if (*vy == 1)
		return ;
	else
	{
		if (j > 0 && j < (*vy - 1) && i == 0)
		{
			ft_putchar('B');
			i++;
		}
		while (j > 0 && j < (*vy - 1) && i > 0 && i < (*vx - 1))
		{
			ft_putchar(' ');
			i++;
		}
		if (j > 0 && j < (*vy - 1) && i == (*vx - 1))
			ft_putchar('B');
	}
}

void	loop3(int i, int j, int *vx, int *vy)
{
	if (*vy == 1)
		return ;
	else 
	{
		if (j == (*vy - 1) && i == 0)
		{
			ft_putchar('C');
			i++;
		}
		while (j == (*vy - 1) && i > 0 && i < (*vx - 1))
		{
			ft_putchar('B');
			i++;
		}
		if (i == (*vx - 1) && *vx != 1 && j == (*vy - 1) && *vy != 1)
			ft_putchar('A');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	*vx;
	int	*vy;

	vx = &x;
	vy = &y;
	j = 0;
	i = 0;
	while (j == 0 || j <= (y - 1))
	{
		if (x <= 0 || y <= 0)
			return ;
		else
		{
			loop1(i, j, vx);
			loop2(i, j, vx, vy);
			loop3(i, j, vx, vy);
		}
		if (j != y)
		{
			ft_putchar('\n');
			j++;
		}
	}
}
