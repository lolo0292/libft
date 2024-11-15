/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:41:26 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/15 11:00:11 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <strings.h>
//cherche la premiere occ de little dans les len premiers car de big
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
    size_t j;
	
	i = 0;
    if (*little == '\0')
        return ((char *)big);
    while (big[i] && i < len)
    {
        if (big[i] == little[0])
        {
            j = 0;
            while (little[j] && big[i + j] == little[j] && (i + j) < len)
                j++;
            if (little[j] == '\0')
                return ((char *)&big[i]);
        }
		i++;
    }
    return (NULL);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}