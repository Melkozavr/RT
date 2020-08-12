/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:24:06 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

char	*ft_strncpy(char *dst, char const *src, size_t n)
{
	char *pdst;

	pdst = dst;
	while (n > 0 && *src)
	{
		*pdst++ = *src++;
		n--;
	}
	if (n > 0)
		ft_bzero(pdst, n);
	return (dst);
}
