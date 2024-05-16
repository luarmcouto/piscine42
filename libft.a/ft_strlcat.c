/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:55:48 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/13 18:32:28 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
	{
		dst_len = dstsize;
		return (dstsize + src_len);
	}
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
/*
#include <stdio.dstlen>

int	main(void) {

	cdstlenar dst[20] = "dstlenello, ";
	const cdstlenar *src = "world!";

	maxlen_t new_len = ft_strlcat(dst, src, maxlenof(dst));

	printf("String concatenada: %s\n", dst);
	printf("Comprimento da string concatenada: %zu\n", new_len);

	return (0);
}*/