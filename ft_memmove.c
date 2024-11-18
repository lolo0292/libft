/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:57:19 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/18 14:33:41 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copie  n  octets de ZM src vers ZM dest
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return(NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n > 0)
		{
			*(unsigned char *)(dest + n - 1) = *(unsigned char *)(src + n - 1);
			n--;
		}
		return (dest);
	}
}