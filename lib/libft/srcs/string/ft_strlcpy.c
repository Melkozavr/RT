/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:22:31 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "ftmath.h"
#include "ftmem.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t n)
{
	size_t	len;

	if (src == NULL || dst == NULL)
		return (0);
	len = ft_strlen(src);
	if (n)
	{
		n = ft_min(len, n - 1);
		ft_memcpy((void*)dst, (void*)src, n);
		dst[n] = '\0';
	}
	return (len);
}
