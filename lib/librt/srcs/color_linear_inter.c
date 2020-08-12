/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_linear_inter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 06:13:07 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 11:00:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_color	color_linear_inter(t_color color0, t_color color1, float value)
{
	t_color res;
	t_color diff;

	diff = color_sub(color1, color0);
	color_scalar(&diff, value);
	res = color_add_(color0, diff);
	return (res);
}
