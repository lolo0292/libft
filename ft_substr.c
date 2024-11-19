/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:50:17 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/19 12:37:26 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//cree une chaine ds str depuis la chaine s de taille len
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}

int main(int argc, char **argv)
{
	char *tmp;
	(void) argc;
	tmp = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("%s", tmp);
	free (tmp);
	return (0);
}