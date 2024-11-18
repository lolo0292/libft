/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:05:40 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/15 18:04:39 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	g;

	g = 0;
	if (!dst || !src)
		return (0);
	if (siz > 0)
	{
		while (src[g] && g < (siz - 1))
		{
			dst[g] = src[g];
			g++;
		}
		dst[g] = 0;
	}
	return (ft_strlen(src));
}
