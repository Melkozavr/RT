/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_clamp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:47:24 by pcollio-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:05 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "color.h"

void	color_clamp(t_color *color, float min, float max)
{
	color->r = fmaxf(min, fminf(color->r, max));
	color->g = fmaxf(min, fminf(color->g, max));
	color->b = fmaxf(min, fminf(color->b, max));
}
