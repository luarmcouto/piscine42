/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:17:42 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 20:19:55 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*pts;
	size_t		i;

	i = 0;
	pts = (const char *)s;
	while (i < n)
	{
		if (pts[i] == (char)c)
			return ((void *)&pts[i]);
		i++;
	}
	return (NULL);
}
