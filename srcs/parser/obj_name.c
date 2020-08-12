/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obj_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:34:56 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*name_obj(int type, int *nb)
{
	char		*tmp;
	char		*name;
	const char	*name_objs[] = {
		"Plane ", "Sphere ", "Cone ", "Cylinder ", "Cube ", "CSG ", "Tore "
	};

	if (!(tmp = ft_itoa(*nb)))
		ft_error(__func__, __LINE__);
	if (ft_btw(type, 0, sizeof(name_objs) / sizeof(char*)))
	{
		if (!(name = ft_strjoin(name_objs[type], tmp)))
			ft_error(__func__, __LINE__);
	}
	else
	{
		if (!(name = ft_strjoin("Light ", tmp)))
			ft_error(__func__, __LINE__);
	}
	ft_strdel(&tmp);
	*nb += 1;
	return (name);
}
