/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:53:43 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/11 20:06:17 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	if (!dst && !src)
		return (0);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (n--)
		*(tmp_dst++) = *(tmp_src++);
	return (dst);
}
/*
int	main(void) {
	char src[] = "Hello, world!";
	char dst[50];

	ft_memcpy(dst, src, sizeof(src));

	printf("dst: %s\n", dst);

	return (0);
}*/