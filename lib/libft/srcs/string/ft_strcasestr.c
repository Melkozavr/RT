/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:20:21 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "ftconvert.h"

char	*ft_strcasestr(char const *s, char const *ne)
{
	size_t len;

	if (!(len = ft_strlen(ne)))
		return ((char*)s);
	while (*s)
	{
		if (ft_tolower(*s) == ft_tolower(*ne) && !(ft_strncasecmp(s, ne, len)))
			return ((char*)s);
		s++;
	}
	return (NULL);
}
