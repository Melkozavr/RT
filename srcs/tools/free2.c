/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:40:23 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animate.h"
#include "ftmem.h"

void
	del_anim(void *content, size_t content_size)
{
	t_anim	*anim;

	(void)content_size;
	anim = content;
	if (anim->obj)
		anim->obj->anim = NULL;
	if (anim->light)
		anim->light->anim = NULL;
	if (anim->next)
		del_anim(anim->next, 0);
	anim_free(anim);
	ft_memdel((void **)&anim);
	anim = NULL;
}
