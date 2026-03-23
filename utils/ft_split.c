/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdo-sant <pdo-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:58:34 by marvin            #+#    #+#             */
/*   Updated: 2026/03/23 17:18:30 by pdo-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_count_word(char	*str, char c)
{
	int	index;
	int	total_words;

	index = 0;
	total_words = 0;
	while (str[index] != '\0')
	{
		if (str[index] != c && (str[index + 1] == c || str[index + 1] == '\0'))
			total_words++;
		index++;
	}
	return (total_words);
}

char	**ft_split(char *str, char c)
{
	char	**matrix;
	int		index;
	int		s_word;
	int		total_words;
	int		word_index;

	index = 0;
	word_index = 0;
	total_words = ft_count_word(str, c);
	matrix = (char **)malloc((total_words + 1) * sizeof(char *));
	matrix[total_words] = NULL;
	if (!matrix)
		return (0);
	while (str && str[index] != '\0')
	{
		if (str[index] != c && (index == 0 || str[index - 1] == c))
			s_word = index;
		if (str[index] != c && (str[index + 1] == c || str[index + 1] == '\0'))
		{
			matrix[word_index] = ft_substr(str, s_word, ((index + 1) - s_word));
			word_index++;
		}
		index++;
	}
	return (matrix);
}
