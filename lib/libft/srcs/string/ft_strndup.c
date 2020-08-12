/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:30:37 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"
#include "ftstring.h"
#include "ftmem.h"

char	*ft_strndup(char const *src, size_t n)
{
	char	*res;
	size_t	size;

	size = ft_min(ft_strlen(src), n);
	if (!(res = ft_strnew(size)))
		return (NULL);
	ft_memcpy(res, src, size);
	return (res);
}
