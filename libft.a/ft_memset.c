/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:55:35 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 12:55:36 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num--)
	{
		*p++ = (unsigned char)value;
	}
	return (ptr);
}
/*
int	main(void) {
	char str[50] = "Hello, world!";
	printf("Antes do ft_memset: %s\n", str);

	ft_memset(str, 'X', 5);

	printf("Depois do ft_memset: %s\n", str);

	return (0);
}*/