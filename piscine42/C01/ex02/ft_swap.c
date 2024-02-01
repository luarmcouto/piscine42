/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 03:29:55 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/16 21:43:43 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 1;
	ft_swap(&a, &b);
	printf("a = %d \n", a);
	printf("b = %d", b);
}*/
