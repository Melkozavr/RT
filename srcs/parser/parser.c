/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:12:22 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "libft.h"
#include "parse.h"

void
	parse_light(t_parse_txt *scene_file)
{
	t_light		light;

	check_opening_bracket(scene_file);
	if (DEBUG)
		ft_putendl("Light node :");
	light_set(&light, scene_file);
	light.name = name_obj(-1, &scene_file->app->scene.nb_light);
	ft_lstpushnew(&scene_file->app->scene.lst_light, &light, sizeof(t_light));
	check_closing_bracket(scene_file);
}

char
	*parse_str(t_parse_txt *scene_file, char *key)
{
	char	*line;
	char	*name;
	size_t	n;

	if (!(line = get_args_after_key(scene_file, key)))
		return (NULL);
	n = ft_strclen(line, ')');
	if (!(name = ft_strndup(line, n)))
		ft_error(__func__, __LINE__);
	return (name);
}
