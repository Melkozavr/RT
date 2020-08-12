/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 00:55:28 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*ft_lltoa(long long value)
{
	char				*res;
	size_t				idx;
	unsigned long long	carry;

	carry = (value > 0) ? value : -value;
	idx = (value < 0) ? 2 : 1;
	while (carry /= 10)
		idx++;
	carry = (value > 0) ? value : -value;
	if (!(res = ft_strnew(idx)))
		return (NULL);
	res[0] = (value < 0) ? '-' : '0';
	while (carry)
	{
		res[--idx] = carry % 10 + 48;
		carry /= 10;
	}
	return (res);
}
