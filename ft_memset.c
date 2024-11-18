/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:30:43 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/18 12:12:11 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// rempli les n premiers octets ZM pointe par s par c
void	*ft_memset(void *s, int c, size_t n)
{
	size_t x;
	x = 0;

	if (!s)
		return (NULL);
	while (x < n)
	{
		*(unsigned char *)(s + x) = (unsigned char)c;
		x++;
	}
	return (s);
}
