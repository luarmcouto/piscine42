/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:00:02 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 16:45:46 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;

	if (!to && !from)
		return (0);
	src = (unsigned char *)from;
	dst = (unsigned char *)to;
	if (src < dst && src + n > dst)
	{
		while (n--)
			dst[n] = src[n];
	}
	else
	{
		while (n--)
			*dst++ = *src++;
	}
	return (to);
}
