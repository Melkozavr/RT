/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   post_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 14:35:31 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "ftmath.h"
#include <math.h>

t_color	sepia(t_color in)
{
	t_color out;

	out.r = ft_clampf((in.r * .393) + (in.g * .769) + (in.b * .189), 0, 1.0);
	out.g = ft_clampf((in.r * .349) + (in.g * .686) + (in.b * .168), 0, 1.0);
	out.b = ft_clampf((in.r * .272) + (in.g * .534) + (in.b * .131), 0, 1.0);
	return (out);
}

t_color	grayscale(t_color in)
{
	t_color out;

	out.r = (in.r + in.g + in.b) / 3;
	out.g = out.r;
	out.b = out.r;
	return (out);
}

t_color	cartoon(t_color in)
{
	t_color out;

	out.r = floorf(in.r * 10) / 10;
	out.g = floorf(in.g * 10) / 10;
	out.b = floorf(in.b * 10) / 10;
	return (out);
}

t_color	negative(t_color in)
{
	t_color out;

	out.r = 1 - in.r;
	out.g = 1 - in.g;
	out.b = 1 - in.b;
	return (out);
}
