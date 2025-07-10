/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:44:23 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/09 11:42:20 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr_recursiv(const char *s, int c, int ct)
{
	if (s[ct] == '\0')
		return (0);
	if (s[ct] == (char)c)
		return ((char *)&s[ct]);
	return (ft_strrchr_recursiv(s, c, ct + 1));
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	if (c == '\0')
		return ((char *)&s[len]);
	return (ft_strrchr_recursiv(s, c, 0));
}

// int	main()
// {
// 	char str[] = "Hello, World!";
// 	char *result;
// 	char *result2;

// 	result2 = strrchr(str, 'z');
// 	result = ft_strrchr(str, 'W');
// 	if (result)
// 		printf("Found character 'W': %s\n", result);
// 	else
// 		printf("Character 'W' not found.\n");
// 	printf("OG\n");
// 	if (result2)
// 		printf("Found character 'z': %s\n", result2);
// 	else
// 		printf("Character 'z' not found.\n");
// 	return 0;
// }