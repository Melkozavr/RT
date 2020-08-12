/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:31:08 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "ftmem.h"

char	*ft_strnstr(char const *str, char const *to_find, size_t n)
{
	size_t len;

	if (!(len = ft_strlen(to_find)))
		return ((char*)str);
	while (*str && n-- >= len)
	{
		if (*str == *to_find && !(ft_memcmp(str, to_find, len)))
			return ((char*)str);
		str++;
	}
	return (NULL);
}
