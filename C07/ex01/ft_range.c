/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:28:12 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/29 19:43:59 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc(sizeof(range) * sizeof(int) + 1);
	if (!range)
		return(0);

	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 20;
	printf("%d", *ft_range(a, b));
}*/
