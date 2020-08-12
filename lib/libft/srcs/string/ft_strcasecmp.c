/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:20:08 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftconvert.h"
#include "ftmem.h"

int	ft_strcasecmp(char const *s1, char const *s2)
{
	t_byte	*ps1;
	t_byte	*ps2;
	int		res;

	ps1 = (t_byte*)s1;
	ps2 = (t_byte*)s2;
	res = 0;
	while (!res && (*ps1 || *ps2))
		res = ft_tolower(*ps1++) - ft_tolower(*ps2++);
	return (res);
}
