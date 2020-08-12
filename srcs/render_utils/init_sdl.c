/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sdl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:00:24 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <SDL.h>
#include <SDL_image.h>
#include "libft.h"
#include "libui.h"
#include "config.h"

t_sdl	*init_sdl(int width, int height)
{
	t_sdl	*sdl;

	if (!(sdl = ft_memalloc(sizeof(t_sdl))))
		error_sdl(sdl);
	sdl->height_vp = height;
	sdl->width_vp = width;
	sdl->img.height = height * RENDER_SCALE;
	sdl->img.width = width * RENDER_SCALE;
	if (!(sdl->img.pixels = malloc(sizeof(uint32_t)
		* sdl->img.height * sdl->img.width)))
		error_sdl(sdl);
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		error_sdl(sdl);
	if (!(sdl->win = SDL_CreateWindow("RT",
									SDL_WINDOWPOS_CENTERED,
									SDL_WINDOWPOS_CENTERED,
									width,
									height,
									SDL_WINDOW_SHOWN)))
		error_sdl(sdl);
	SDL_SetHint(SDL_HINT_BMP_SAVE_LEGACY_FORMAT, "1");
	if (IMG_Init(0) != 0)
		error_sdl(sdl);
	return (sdl);
}
