/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_scalar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 03:28:16 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "ftmath.h"

void	color_scalar(t_color *color, float k)
{
	color->r *= k;
	color->g *= k;
	color->b *= k;
}

t_color	color_scalar_(t_color color, float k)
{
	color.r *= k;
	color.g *= k;
	color.b *= k;
	return (color);
}
