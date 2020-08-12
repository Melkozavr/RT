/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 22:33:42 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <stddef.h>

int		texture_cmp(void *res_1, void *res_2);
int		obj_cmp(void *res1, void *res2);
int		mat_cmp(void *res_1, void *res_2);
int		light_cmp(void *res_1, void *res_2);
int		scene_cmp(void *res_1, void *res_2);

void	del_obj(void *content, size_t content_size);
void	del_anim(void *content, size_t content_size);
void	del_light(void *content, size_t content_size);
void	exit_safe(int err_code);

#endif
