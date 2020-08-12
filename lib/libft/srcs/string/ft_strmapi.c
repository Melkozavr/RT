/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:23:16 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*ft_strmapi(char const *str, char (*f) (unsigned int, char))
{
	size_t			len;
	char			*res;
	unsigned int	idx;

	if (!f || !str)
		return (NULL);
	len = ft_strlen(str);
	if (!(res = ft_strnew(len)))
		return (NULL);
	idx = 0;
	while (*str)
		*res++ = f(idx++, *str++);
	res -= len;
	return (res);
}
