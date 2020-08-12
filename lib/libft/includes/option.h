/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:13:44 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTION_H
# define OPTION_H

# include <stdbool.h>

typedef struct s_option	t_option;

struct			s_option
{
	int			argc;
	char		**argv;
	char		*path;
	int			count_opt;
	int			key_found_bitrpz;
	void		*link_prg;
	bool		(*test_)	(t_option, char key);
	void		(*reset_)	(t_option*, char key);
};

/*
** t_opt_func	funct[128];
** int			(*set_func) (t_option*, char, char*, void *(*func) (void*));
** int			(*do_) (char*, t_option);
**
** struct			s_opt_func
** {
** 	bool		in_argv;
** 	short		idx_argv;
** 	char		*name;
** 	void		*(*func) (void*);
** };
*/

t_option		ft_options(int ac, char **av, char *usage);

#endif
