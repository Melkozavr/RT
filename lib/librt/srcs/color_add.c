/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 03:26:10 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "ftmath.h"

void	color_add(t_color *color, t_color add)
{
	color->r += add.r;
	color->g += add.g;
	color->b += add.b;
}

t_color	color_add_(t_color color, t_color add)
{
	color.r += add.r;
	color.g += add.g;
	color.b += add.b;
	return (color);
}
