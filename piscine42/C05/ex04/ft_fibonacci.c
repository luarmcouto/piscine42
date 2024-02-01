/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:14:14 by minfinga          #+#    #+#             */
/*   Updated: 2024/01/23 00:14:17 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0 || index == 1)
	{
		return (index);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_fibonacci(5));
}
*/
