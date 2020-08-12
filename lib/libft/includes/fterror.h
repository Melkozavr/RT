/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fterror.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 23:37:18 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTERROR_H
# define FTERROR_H

typedef struct		s_err
{
	char			*err_msg;
	const char		*func;
	const char		*file;
	int				line;
}					t_err;

t_err				ft_new_err(char *err_msg, const char func[], int line,
	const char file[]);

#endif
