/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:34:33 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/15 10:47:00 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <strings.h>
//alloue ed la mem pour un tab de nmemb elements
void	*calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	tmp = (void*)malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}