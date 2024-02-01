/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:33:42 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/16 21:44:29 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*int	main()
{
	int a;
	int b;

	a = 10;
	b = 3;
	printf("%d / %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div %d mod %d", a, b);
}*/
