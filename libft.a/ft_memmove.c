/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:00:02 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/11 22:17:48 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;

	if (!dst && !src)
		return (NULL);
	c_src = (char *)src;
	c_dst = (char *)dst;
	if (c_dst > c_src && src + len > dst)
		while (len--)
			c_dst[len] = c_src[len];
	else
	{
		while (len--)
			*c_dst++ = *c_src++;
	}
	return (dst);
}
