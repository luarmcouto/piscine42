/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 05:55:19 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/22 06:03:06 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	element;

	i = 0;
	while (i < size / 2)
	{
		element = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = element;
		i++;
	}
}
