/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 03:24:03 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

void	color_mult(t_color *color, t_color *mult)
{
	color->r *= mult->r;
	color->g *= mult->g;
	color->b *= mult->b;
}

t_color	color_mult_(t_color color, t_color mult)
{
	color.r *= mult.r;
	color.g *= mult.g;
	color.b *= mult.b;
	return (color);
}
