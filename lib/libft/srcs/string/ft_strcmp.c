/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:21:06 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	t_byte *ps1;
	t_byte *ps2;

	ps1 = (t_byte*)s1;
	ps2 = (t_byte*)s2;
	while (*ps1 && *ps2 && *ps1 == *ps2)
	{
		++ps1;
		++ps2;
	}
	return (*ps1 - *ps2);
}
