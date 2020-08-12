/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:20:56 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "color.h"

void	color_max(t_color *col1, t_color *col2)
{
	col1->r = fmaxf(col1->r, col2->r);
	col1->g = fmaxf(col1->g, col2->g);
	col1->b = fmaxf(col1->b, col2->b);
}
