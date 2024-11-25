/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:08:04 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/25 14:56:17 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

// split the s
char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == (char)c)
// 			return ((char *)(s + i));
// 		i++;
// 	}
// 	if (s[i] == (char)c)
// 		return ((char *)(s + i));
// 	else
// 		return (NULL);
// }

// size_t	ft_strlen(const char *s)
// {
// 	size_t	x;

// 	x = 0;
// 	while (s[x])
// 		x++;
// 	return (x);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	s_len;
// 	char	*ptr;

// 	if (!s)
// 		return (NULL);
// 	s_len = ft_strlen(s);
// 	if (start >= s_len)
// 		return (ft_strdup(""));
// 	if (len > s_len - start)
// 		len = s_len - start;
// 	ptr = malloc(sizeof(char) * (len + 1));
// 	if (!ptr)
// 		return (NULL);
// 	ft_strlcpy(ptr, s + start, len + 1);
// 	return (ptr);
// }

// char	*ft_strdup(const char *s)
// {
// 	size_t	i;
// 	char	*dest;

// 	i = 0;
// 	dest = malloc((ft_strlen(s) + 1) * sizeof(char));
// 	if (!dest)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		dest[i] = s[i];
// 		i++;
// 	}
// 	dest[i] = 0;
// 	return (dest);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
// {
// 	size_t	g;

// 	g = 0;
// 	if (siz > 0)
// 	{
// 		while (src[g] && g < (siz - 1))
// 		{
// 			dst[g] = src[g];
// 			g++;
// 		}
// 		dst[g] = 0;
// 	}
// 	return (ft_strlen(src));
// }

// int main(int argc, char **argv)
// {
//     char **tmp; 
//     int i;

//     if (argc != 3) 
//     {
//         printf("Usage: %s <string_to_split> <delimiter>\n", argv[0]);
//         return (1);
//     }

//     tmp = ft_split(argv[1], argv[2][0]);
//     if (!tmp)
//     {
//         printf("Error: Memory allocation failed.\n");
//         return (1);
//     }

//     i = 0;
//     while (tmp[i])
//     {
//         printf("tmp[%d] = '%s'\n", i, tmp[i]);
//         free(tmp[i]); 
//         i++;
//     }
//     free(tmp); 

//     return (0);
// }