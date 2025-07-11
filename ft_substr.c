/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:09:22 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:16:14 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_substr_recursiv(const char *s, char *result, unsigned int start,
		size_t len, size_t i)
{
	if (i >= len || s[start + i] == '\0')
	{
		result[i] = '\0';
		return ;
	}
	result[i] = s[start + i];
	ft_substr_recursiv(s, result, start, len, i + 1);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_substr_recursiv(s, substr, start, len, 0);
	return (substr);
}
