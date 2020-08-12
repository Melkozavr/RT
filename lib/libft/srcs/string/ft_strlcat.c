/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:22:21 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

size_t		ft_strlcat(char *dst, char const *src, size_t size)
{
	char	*pdst;
	size_t	lensrc;
	size_t	lendst;

	pdst = dst;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (lendst >= size)
		return (lensrc + size);
	pdst += lendst;
	while (*src && size-- > 1 + lendst)
		*pdst++ = *src++;
	*pdst = '\0';
	return (lensrc + lendst);
}
