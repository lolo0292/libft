/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:42:44 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/14 18:07:28 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copie de chaine de char en allouant de la mem dynamique
char	*strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}