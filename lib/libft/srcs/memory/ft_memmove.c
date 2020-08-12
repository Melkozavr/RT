/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:16:58 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
	if (n == 0 || dst == src)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, n);
	else
		ft_memrcpy(dst, src, n);
	return (dst);
}
