/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:55:06 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftconvert.h"
#include "ftctype.h"
#include "ftstring.h"

float		ft_atof(char const *str)
{
	int		neg;
	float	res;
	float	mantisse;
	float	mask;

	res = 0;
	mantisse = 0;
	mask = 0.1f;
	while (*str && (ft_isspace(*str)))
		str++;
	neg = (*str == 45) ? 1 : 0;
	res = ft_atoi(str);
	while (*str && (ft_isdigit(*str) || *str == '-' || *str == '+'))
		str++;
	if (*str != '.')
		return (res);
	str++;
	while (*str && (*str >= 48 && *str <= 57))
	{
		mantisse += (*str - 48) * mask;
		mask *= 0.1f;
		str++;
	}
	return (neg == 1) ? res - mantisse : res + mantisse;
}
