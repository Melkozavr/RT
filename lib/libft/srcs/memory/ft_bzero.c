/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 08:09:40 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"
#include <stdint.h>

static inline t_byte
	*ft_bzero_long(void *str, size_t n)
{
	uint64_t	*pstr;
	uint64_t	val;
	size_t		n_long;

	n_long = n >> 3UL;
	pstr = str;
	val = 0UL;
	while (n_long & 0x3UL)
	{
		*pstr++ = val;
		n_long--;
	}
	n_long >>= 2UL;
	while (n_long--)
	{
		pstr[0] = val;
		pstr[1] = val;
		pstr[2] = val;
		pstr[3] = val;
		pstr = &pstr[4];
	}
	return ((t_byte*)pstr);
}

void
	ft_bzero(void *str, size_t n)
{
	t_byte			*pstr;
	register t_byte	val;

	val = 0;
	pstr = (t_byte*)str;
	if (n >= 8)
	{
		while ((uintptr_t)pstr & 0x7UL && n--)
			*pstr++ = val;
		pstr = ft_bzero_long(pstr, n);
	}
	n = n & 0x7UL;
	while (n-- > 0)
		*pstr++ = val;
}
