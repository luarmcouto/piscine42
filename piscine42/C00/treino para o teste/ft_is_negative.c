/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:35:30 by luarodri          #+#    #+#             */
/*   Updated: 2024/01/18 20:52:58 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'N';
	if (n >= 0)
	{
		c = 'P';
	}
	write(1, &c, 1 );
}

int	main()
{
	int	n;

	n = 0;
	ft_is_negative(n);
}
