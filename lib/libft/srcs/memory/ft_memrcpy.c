/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:33:26 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

void	*ft_memrcpy(void *dst, void const *src, size_t n)
{
	t_byte	*pdst;
	t_byte	*psrc;

	pdst = (t_byte*)dst;
	psrc = (t_byte*)src;
	while (n--)
		pdst[n] = psrc[n];
	return (dst);
}
