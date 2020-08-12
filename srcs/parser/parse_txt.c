/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_txt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 23:29:11 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tools.h"
#include "parse.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/errno.h>

char
	*get_curr_line(t_parse_txt *scene_file)
{
	if (!(scene_file->greed))
	{
		err_set(scene_file, __func__, __LINE__, __FILE__);
		err_exit(ERR_GREED_NULL, scene_file);
	}
	scene_file->is_pop = 0;
	if (!(ft_btw(scene_file->line_idx, 0, scene_file->line_max)))
	{
		err_set(scene_file, __func__, __LINE__, __FILE__);
		err_exit(ERR_PARSE_OUTR, scene_file);
	}
	if (!(scene_file->greed[scene_file->line_idx]))
	{
		err_set(scene_file, __func__, __LINE__, __FILE__);
		err_exit(ERR_PARSE_STRN, scene_file);
	}
	return (scene_file->greed[scene_file->line_idx]);
}

char
	*pop_line(t_parse_txt *scene_file)
{
	char *res;

	res = get_curr_line(scene_file);
	scene_file->is_pop = 1;
	scene_file->line_idx++;
	return (res);
}

void
	err_exit(char *err_msg, t_parse_txt *scene_file)
{
	scene_file->line_idx -= scene_file->is_pop;
	if (scene_file->line_idx < scene_file->line_max && scene_file->greed)
	{
		ft_printf("%s\nPARSE_TXT : \"%s\" (%s:%d)\n%s%s (%s:%d)\n",
			err_msg, get_curr_line(scene_file),
			scene_file->filename, scene_file->line_idx + 1,
			"Error in the function : ", scene_file->err_func,
			scene_file->err_file, scene_file->err_at_line);
	}
	else
		ft_printf("%s\nError in the function : %s (%s:%d)\n",
			err_msg, scene_file->err_func, scene_file->err_file,
			scene_file->err_at_line);
	ft_tabdel(scene_file->greed);
	if (scene_file->exit_on_err)
		exit_safe(errno);
}

void
	err_set(t_parse_txt *scene_file, const char err_func[],
		int line_in_code, const char err_file[])
{
	scene_file->err_file = err_file;
	scene_file->err_func = err_func;
	scene_file->err_at_line = line_in_code;
}

int
	load_parse_txt(t_parse_txt *scene_file, t_data *app, char *filename)
{
	int		fd;
	size_t	size_greed;

	ft_bzero(scene_file, sizeof(t_parse_txt));
	scene_file->app = app;
	scene_file->filename = filename;
	scene_file->exit_on_err = true;
	scene_file->line_max = ft_line_count(filename);
	size_greed = sizeof(char *) * (scene_file->line_max + 1);
	if (!(scene_file->greed = ft_memalloc(size_greed)))
		return (EXIT_FAILURE);
	fd = ft_fopen_read(filename);
	while (ft_gnl(fd, &scene_file->greed[scene_file->line_idx], "\n") > 0)
		scene_file->line_idx++;
	close(fd);
	scene_file->line_idx = 0;
	return (EXIT_SUCCESS);
}
