/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:16:15 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	t_byte *pstr;

	pstr = (t_byte*)str;
	while (n--)
	{
		if (*pstr == (t_byte)c)
			return ((void *)pstr);
		pstr++;
	}
	return (NULL);
}
