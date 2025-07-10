/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:31:08 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/09 11:05:34 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (size == 0)
		return (0);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// int	main()
// {
// 	char dest[20];
// 	char dest2[20];
// 	const char *src = "Hello, World!";
// 	const char *src2 = "Hello, World!";
// 	size_t copied;

// 	copied = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied string: %s\n", dest);
// 	printf("Number of characters copied: %zu\n", copied);
// 	copied = strlcpy(dest2, src2, sizeof(dest2));
// 	printf("OG Copied string: %s\n", dest2);
// 	printf("OG Number of characters copied: %zu\n", copied);
// 	return 0;
// }