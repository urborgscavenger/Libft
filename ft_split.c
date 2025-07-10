/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:28:56 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/09 14:04:35 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word_count++;
		i++;
	}
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count)
	{
		size_t start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = ft_substr(s, start, i - start);
		j++;
		while (s[i] && s[i] == c)
			i++;
	}
	result[j] = NULL;
	return (result);
}

int	main(void)
{
	const char *str = "Hello, World! This is a test.";
	char **result;
	size_t i;

	result = ft_split(str, ' ');
	result = ft_split(str, ' ');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("Word %zu: %s\n", i, result[i]);
			free(result[i]); // Free each word
			i++;
		}
		free(result); // Free the array of pointers
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}

