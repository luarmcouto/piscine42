/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:57:50 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/06/09 16:22:12 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstri(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		i += ft_putstri("(null)");
	else
	{
		while (str[i])
		{
			ft_putchr(str[i]);
			i++;
		}
	}
	return (i);
}
