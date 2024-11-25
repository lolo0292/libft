/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:30:43 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/25 14:54:10 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fill n first bytes of mem pointed by s for c
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		*(unsigned char *)(s + x) = (unsigned char)c;
		x++;
	}
	return (s);
}
