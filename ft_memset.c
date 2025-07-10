/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:00:59 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/09 11:05:03 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mset_recursiv(void *dist, int c, size_t n, size_t i)
{
	if (i < n)
	{
		((unsigned char *)dist)[i] = (unsigned char)c;
		mset_recursiv(dist, c, n, i + 1);
	}
}

void	*ft_memset(void *dist, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;
	ptr = (unsigned char *)dist;
	i = 0;
	mset_recursiv(ptr, c, n, i);
	return (dist);
}

int	main()
{
	char str[50] = "";
	char str2[50] = "";
	printf("Before memset: %s\n", str);
	printf("Before OGmemset: %s\n", str2);
	ft_memset(str, 'X', 5);
	memset(str2, 'X', 5);
	printf("After memset: %s\n", str);
	printf("After OGmemset: %s\n", str2);
	return 0;
}
