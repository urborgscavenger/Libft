/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:50:36 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/03 12:56:13 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	char test_chars[] = {'0', '5', '9', 'a', '!', '3', '7', 'Z', '\0'};
	int i = 0;

	while (test_chars[i] != '\0')
	{
		if (ft_isdigit(test_chars[i]))
			printf("'%c' is a digit. %d\n", test_chars[i], ft_isdigit(test_chars[i]));
		else
			printf("'%c' is not a digit. %d\n", test_chars[i], ft_isdigit(test_chars[i]));
		i++;
	}
	return (0);
}