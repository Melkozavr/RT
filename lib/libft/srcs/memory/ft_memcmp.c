/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:16:26 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	int		res;
	t_byte	*ps1;
	t_byte	*ps2;

	res = 0;
	if (s1 == s2)
		return (res);
	ps1 = (t_byte*)s1;
	ps2 = (t_byte*)s2;
	while (n-- && !res)
		res = *ps1++ - *ps2++;
	return (res);
}
