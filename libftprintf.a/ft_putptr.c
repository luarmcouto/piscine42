/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:29:09 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/06/09 16:10:15 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *arg)
{
	unsigned int	i;

	if (arg == 0)
		return (ft_putstri("(nil)"));
	i = 2;
	ft_putstri("0x");
	i += ft_puthex((unsigned long)arg, 'x');
	return (i);
}
