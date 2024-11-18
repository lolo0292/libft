/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:07:05 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/18 16:00:46 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction pour compter le nombre de mots dans la chaîne
static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

// Fonction pour allouer et copier un mot à partir de l'index donné
static char	*ft_word_dup(const char *s, size_t start, size_t len)
{
	char	*word;
	size_t

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	for (size_t i = 0; i < len; i++)
		word[i] = s[start + i];
	word[len] = '\0';
	return (word);
}

// Fonction principale ft_split
char	**ft_split(char const *s, char c)
{
	char **result;
size_t word_count, i = 0, start = 0, len = 0, word_index = 0;

	if (!s)
		return (NULL);

	// Étape 1 : Compter le nombre de mots
	word_count = ft_word_count(s, c);

	// Étape 2 : Allouer de la mémoire pour le tableau de chaînes
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);

	// Étape 3 : Extraire chaque mot et le copier dans le tableau
	while (s[i])
	{
		if (s[i] != c)
		{
			if (len == 0) // Marque le début d'un mot
				start = i;
			len++;
		}
		else if (len > 0)
		{ // Fin d'un mot
			result[word_index++] = ft_word_dup(s, start, len);
			len = 0;
		}
		i++;
	}
	// Dernier mot (si la chaîne ne se termine pas par un délimiteur)
	if (len > 0)
		result[word_index++] = ft_word_dup(s, start, len);

	// Étape 4 : Terminer le tableau avec un pointeur NULL
	result[word_index] = NULL;
	return (result);
}