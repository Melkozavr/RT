/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_sdl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:10:41 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <SDL.h>
#include "libui.h"
#include "libft.h"

void	error_sdl(t_sdl *sdl)
{
	ft_printf("Erreur SDL_Init : %s", SDL_GetError());
	exit_sdl(sdl);
	exit(-1);
}
