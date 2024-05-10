/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:39:22 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 13:11:02 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num--)
	{
		*p++ = 0;
	}
}
/*
int	main(void) {
	char str[50] = "Hello, world!";
	printf("Antes do ft_bzero: %s\n", str);

	ft_bzero(str, sizeof(str));

	printf("Depois do ft_bzero: %s\n", str);

	return (0);
}*/
