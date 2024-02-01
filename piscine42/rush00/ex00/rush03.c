/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frbranda <frbranda@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:02:44 by frbranda          #+#    #+#             */
/*   Updated: 2024/01/14 19:13:55 by frbranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

void	ft_top(int x, int w);

void	ft_mid(int x, int w);

void	ft_loop(int x, int y, int w, int h);

void	ft_putchar(char c);

void	ft_loop(int x, int y, int w, int h)
{
	while (h <= y)
	{
		if (h == 1)
		{
			ft_top(x, w);
			h++;
			w = 1;
		}
		if (h > 1 && h < y)
		{
			ft_mid(x, w);
			h++;
			w = 1;
		}
		if (h == y && h > 1)
		{
			ft_top(x, w);
			h++;
		}
	}
}

void	ft_top(int x, int w)
{
	while (w <= x)
	{
		if (w == 1 && w == x)
		{
			ft_putchar('A');
			ft_putchar('\n');
			w++;
		}
		if (w == 1 && w != x)
		{
			ft_putchar('A');
			w++;
		}
		if (w > 1 && w < x)
		{
			ft_putchar('B');
			w++;
		}
		if (w == x && w > 1)
		{
			ft_putchar('C');
			ft_putchar('\n');
			w++;
		}
	}
}

void	ft_mid(int x, int w)
{
	while (w <= x)
	{
		if (w == 1)
		{
			ft_putchar('B');
			w++;
		}
		if (w > 1 && w < x)
		{
			ft_putchar(' ');
			w++;
		}
		if (w == x && w > 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
			w++;
		}
	}
}

void	rush(int x, int y)
{
	int	w;
	int	h;

	w = 1;
	h = 1;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_loop(x, y, h, w);
	}
}
