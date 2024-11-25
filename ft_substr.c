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

char *ft_substr(char const *s, unsigned int start, size_t len) {
    size_t i = 0;
    size_t j = 0;
    char *s2;

    if (!s)
        return (NULL);

    size_t s_len = strlen(s);
    if (start >= s_len)
        len = 0;
    if (start + len > s_len)
        len = s_len - start;

    s2 = malloc(sizeof(char) * (len + 1));
    if (!s2)
        return (NULL);

    while (i < len && s[start])
        s2[j++] = s[start++];
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
