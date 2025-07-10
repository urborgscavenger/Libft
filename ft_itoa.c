/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:04:44 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/10 13:31:39 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		temp;
	int		sign;

	sign = (n < 0) ? -1 : 1;
	temp = n;
	len = (n <= 0) ? 1 : 0;
	while (temp)
	{
		temp /= 10;
		len++;
	}
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--len] = '0' + sign * (n % 10);
		n /= 10;
	}
	if (sign < 0)
		result[0] = '-';
	return (result);
}

int	main()
{
	int number = -12345;
	char *str;

	str = ft_itoa(number);
	if (str)
	{
		printf("The integer %d as a string is: %s\n", number, str);
		free(str); // Don't forget to free the allocated memory
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
