/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:37:54 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtstruct.h"
#include "ftio.h"

void	vec3_print(t_vec3 data)
{
	ft_printf("x = %f y = %f z = %f\n", data.x, data.y, data.z);
}

void	vec3_print_(char *msg, t_vec3 data)
{
	ft_printf("%s x = %f y = %f z = %f\n", msg, data.x, data.y, data.z);
}
