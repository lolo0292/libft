/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:10:01 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/18 15:05:05 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    ft_strlena(int nb)
{
    int        len;
    long    n;

    len = 0;
    n = nb;
    if (n < 0)
    {
        len++;
        n = -n;
    }
    if (n == 0)
        return (1);
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int nb)
{
    char        *res;
    long        n;
    int            i;

    n = nb;
    i = ft_strlena(n);
    res = malloc((ft_strlena(n) + 1) * sizeof(char));
    if (!res)
        return (NULL);
    res[i] = '\0';
    i--;
    if (n < 0)
    {
        res[0] = '-';
        n = -n;
    }
    if (n == 0)
        res[0] = '0';
    while (n > 0)
    {
        res[i] = n % 10 + '0';
        n /= 10;
        i--;
    }
    return (res);
}