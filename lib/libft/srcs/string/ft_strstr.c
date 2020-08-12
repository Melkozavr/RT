/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:31:58 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "ftmem.h"

char	*ft_strstr(char const *str, char const *to_find)
{
	size_t len;

	if (!(len = ft_strlen(to_find)))
		return ((char*)str);
	while (*str)
	{
		if (*str == *to_find && !(ft_memcmp(str, to_find, len)))
			return ((char*)str);
		str++;
	}
	return (NULL);
}
