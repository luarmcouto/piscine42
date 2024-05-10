/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:47:49 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/10 19:53:11 by luamonteiro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (ft_strlen(str));
	while (i >= 0)
	{
		if ((char)c == str[i])
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
