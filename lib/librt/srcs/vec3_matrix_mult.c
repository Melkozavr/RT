/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_matrix_mult.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 17:35:37 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtstruct.h"
#include "ftmem.h"

void	vec3_matrix_mult(t_matrix *matrix, t_matrix *add)
{
	t_matrix	res;
	int			i;
	int			j;

	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
			res.m[i][j] = matrix->m[i][0] * add->m[0][j]
			+ matrix->m[i][1] * add->m[1][j] + matrix->m[i][2] * add->m[2][j];
	}
	ft_memcpy(matrix, &res, sizeof(t_matrix));
}
