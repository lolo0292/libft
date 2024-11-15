/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:57:19 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/14 17:23:12 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copie  n  octets de ZM src vers ZM dest
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		retrun(NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n > 0)
		{
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
			n--;
		}
		return (dest);
	}
}