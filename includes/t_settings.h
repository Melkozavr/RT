/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_settings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 00:13:33 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_SETTINGS_H
# define T_SETTINGS_H

# include "color.h"
# include <stdbool.h>

typedef struct	s_settings
{
	t_color		back_color;
	t_color		amb_light;
	t_color		filter;
	bool		light;
	bool		facing;
	bool		shine;
	bool		shadow;
	bool		deflect;
	bool		absorb;
	bool		anti_a;
	bool		debug_normal;
	bool		normal_mapping;
	bool		skybox;
	int			depth_max;
	float		fov;
}				t_settings;

#endif
