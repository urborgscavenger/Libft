/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:28:56 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 14:27:48 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Helper function to count the number of words
static size_t	count_words(const char *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word_count++;
		i++;
	}
	return (word_count);
}

// Recursive helper function to split the string
static void	split_recursiv(const char *s, char c, char **result, size_t i)
{
	size_t	start;

	while (*s && *s == c)
		s++;
	if (!*s)
	{
		result[i] = NULL;
		return ;
	}
	start = 0;
	while (s[start] && s[start] != c)
		start++;
	result[i] = ft_substr(s, 0, start);
	split_recursiv(s + start, c, result, i + 1);
}

// Main ft_split function
char	**ft_split(const char *s, char c)
{
	size_t	word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	split_recursiv(s, c, result, 0);
	return (result);
}

// int	main(void)
// {
// 	const char *str = "Hello, World! This is a test.";
// 	char **result;
// 	size_t i;

// 	result = ft_split(str, ' ');
// 	result = ft_split(str, ' ');
// 	if (result)
// 	{
// 		i = 0;
// 		while (result[i])
// 		{
// 			printf("Word %zu: %s\n", i, result[i]);
// 			free(result[i]); // Free each word
// 			i++;
// 		}
// 		free(result); // Free the array of pointers
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
