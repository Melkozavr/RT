/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:23:08 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*ft_strmap(char const *str, char (*f) (char))
{
	size_t	len;
	char	*res;

	if (!f || !str)
		return (NULL);
	len = ft_strlen(str);
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (*str)
		*res++ = f(*str++);
	res -= len;
	return (res);
}
