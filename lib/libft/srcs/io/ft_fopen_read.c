/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fopen_read.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:38:14 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
#include <fcntl.h>

int	ft_fopen_read(char *file_name)
{
	int	fd;

	if ((fd = open(file_name, O_RDONLY)) == -1)
	{
		ft_printf("Error opening [%s]\n", file_name);
		ft_error(__func__, __LINE__);
	}
	return (fd);
}
