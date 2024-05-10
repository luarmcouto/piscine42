/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:55:48 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 14:44:52 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	h;
	size_t	i;
	size_t	start;

	h = ft_strlen(dest);
	if (size == 0 || size <= h)
		return (ft_strlen(src) + size);
	i = 0;
	start = ft_strlen(dest);
	while (src[i] && i < (size - start - 1))
	{
		dest[h] = src[i];
		i++;
		h++;
	}
	dest[h] = '\0';
	return (start + ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void) {

	char dest[20] = "Hello, ";
	const char *src = "world!";

	size_t new_len = ft_strlcat(dest, src, sizeof(dest));

	printf("String concatenada: %s\n", dest);
	printf("Comprimento da string concatenada: %zu\n", new_len);

	return (0);
}*/