/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 04:18:50 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "config.h"
#include "ftio.h"
#include "ftstring.h"

char
	*get_args_key_require(t_parse_txt *scene_file, const char *key)
{
	char *check_line_args;

	check_line_args = pop_line(scene_file);
	if (!(check_line_args = ft_strstr(check_line_args, key)))
	{
		err_set(scene_file, __func__, __LINE__, __FILE__);
		ft_printf("%s : %s\n", ERR_P_KEY, key);
		err_exit("", scene_file);
	}
	check_line_args += ft_strlen(key);
	if (ft_strrchr(check_line_args, ')') == NULL)
	{
		err_set(scene_file, __func__, __LINE__, __FILE__);
		err_exit(ERR_P_CLOSE_PAR, scene_file);
	}
	return (check_line_args);
}

char
	*get_args_after_key(t_parse_txt *scene_file, const char *key)
{
	char *check_line_args;

	check_line_args = pop_line(scene_file);
	if (!(check_line_args = ft_strstr(check_line_args, key)))
	{
		if (DEBUG)
			ft_printf("%s : %s\n", ERR_P_KEY, key);
		scene_file->line_idx--;
		return (NULL);
	}
	check_line_args += ft_strlen(key);
	if (ft_strrchr(check_line_args, ')') == NULL)
	{
		if (DEBUG)
			ft_printf("%s : %s\n", ERR_P_KEY, key);
		scene_file->line_idx--;
		return (NULL);
	}
	return (check_line_args);
}

void
	check_opening_bracket(t_parse_txt *scene_file)
{
	if (ft_strchr(get_curr_line(scene_file), '{') != NULL)
		scene_file->line_idx++;
	else
	{
		err_set(scene_file, __func__, __LINE__, __FILE__);
		err_exit(ERR_P_BRACKET_OPEN, scene_file);
	}
}

void
	check_closing_bracket(t_parse_txt *scene_file)
{
	if (ft_strchr(get_curr_line(scene_file), '}') != NULL)
		scene_file->line_idx++;
	else
	{
		err_set(scene_file, __func__, __LINE__, __FILE__);
		err_exit(ERR_P_BRACKET_CLSE, scene_file);
	}
}
