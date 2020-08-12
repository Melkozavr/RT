/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unit_test.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 04:20:38 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNIT_TEST_H
# define FT_UNIT_TEST_H

/*
** # include "ft_unit_test.h"
*/

# include "t_data.h"
# include "export.h"
# include "interface.h"
# include "libft.h"

int		reader_no_exit(char *filename, t_data *app);
int		export_test_suite(t_data *const_data);

#endif
