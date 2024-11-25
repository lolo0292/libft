/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:50:17 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/20 20:25:59 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s2;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (start >= i)
		len = 0;
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	while (j < len && s[start])
	{
		s2[j] = s[start];
		j++;
		start++;
	}
	s2[j] = '\0';
	return (s2);
}
// int	main(int argc, char **argv)
// {
// 	char *tmp;
// 	(void)argc;
// 	tmp = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
// 	printf("%s", tmp);
// 	free(tmp);
// 	return (0);
// }
