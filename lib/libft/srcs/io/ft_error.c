/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:18:39 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
#include <string.h>
#include <stdlib.h>
#include <errno.h>

/*
** @ft_error
** This will abort the program an give valuable intel on why and where
** @param function (__func__)
** @param line (__LINE__)
*/

void	ft_error(const char function[], int line)
{
	ft_printf("Error during %s (at line : %d) => %s\n",\
			function, line, strerror(errno));
	exit(errno);
}
