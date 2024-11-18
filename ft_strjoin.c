/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:54:28 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/15 17:59:41 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Function that join the 2 strings in arguments
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (int)(ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = 0;
	return (str);
}

int	main(int ac, char **av)
{
	char *nul = NULL;
	if (ac != 3)
		return (printf("nique ta mere\n"));
	printf("s1 = %s\n", av[1]);
	printf("s2 = %s\n", av[2]);
	char *str = ft_strjoin(av[1], nul);
	printf("joined %p\n", (void *)0);
	free(str);
	return (0);
}