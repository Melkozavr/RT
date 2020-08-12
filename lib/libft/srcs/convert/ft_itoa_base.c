/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 08:13:58 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*ft_itoa_base(int value, int base)
{
	char			*res;
	char			*basestr;
	int				idx;
	unsigned int	carry;

	basestr = "0123456789ABCDEF";
	idx = (value < 0 && base == 10) ? 2 : 1;
	carry = (value > 0) ? value : -value;
	if (base < 2 || base > 16)
		return (NULL);
	while (carry /= base)
		idx++;
	carry = (value > 0) ? value : -value;
	if (!(res = ft_strnew(idx)))
		return (NULL);
	res[0] = (value < 0 && base == 10) ? '-' : basestr[0];
	while (carry)
	{
		res[--idx] = basestr[carry % base];
		carry /= base;
	}
	return (res);
}
