/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:42:16 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"
#include "ftio.h"
#include <stdlib.h>

void	*ft_safe_alloc(size_t size)
{
	void *res;

	if (!(res = malloc(size)))
	{
		ft_putendl("Malloc Error");
		exit(0);
	}
	ft_bzero(res, size);
	return (res);
}
