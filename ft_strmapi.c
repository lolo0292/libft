/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:44:07 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/18 17:18:30 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *ptr;
	unsigned int i;

	if (!s)
		return (NULL);
	ptr = (char *)malloc(sizeof(ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr = f(s, &s[i]);
		i++;
	}	
	ptr[i] = '\0';
	return (ptr);
}