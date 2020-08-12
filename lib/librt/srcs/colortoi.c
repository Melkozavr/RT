/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colortoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 23:51:14 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

int	colortoi(t_color color)
{
	color_scalar(&color, 255);
	return (((uint8_t)color.r << SHIFT_RED)
		+ ((uint8_t)color.g << SHIFT_GREEN)
		+ ((uint8_t)color.b << SHIFT_BLUE));
}
