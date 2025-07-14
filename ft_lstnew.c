/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:34:17 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 15:39:01 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*vessel;

	vessel = (t_list *)malloc(sizeof(t_list));
	if (!vessel)
		return (NULL);
	vessel->content = content;
	vessel->next = NULL;
	return (vessel);
}

// int	main(void)
// {
// 	t_list	*new;

// 	new = ft_lstnew("Hello, World!");
// 	return (0);
// }