/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:46:23 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/09 11:05:40 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_recursiv(const char *s, int i)
{
	if (s[i] == '\0')
		return (i);
	return (ft_len_recursiv(s, i + 1));
}

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
		return (ft_len_recursiv(s, i));
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	const char *test_str = "0";
// 	int length;
// 	int length_og;

// 	length = ft_strlen(test_str);
// 	length_og = strlen(test_str);
// 	printf("The length of the string '%s' is: %d\n", test_str, length);
// 	printf("The length of the string '%s' is: %d (OG)\n", test_str, length_og);
// 	return (0);
// }