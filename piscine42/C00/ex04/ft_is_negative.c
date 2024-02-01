/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:10:42 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/13 22:00:26 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		n = 'P';
	}
	else
	{
		n = 'N';
	}
	write(1, &n, 1);
}
/*
int	main(void)
{
	ft_is_negative(-5);
	return (0);
}*/
