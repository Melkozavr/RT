/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:18:29 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int carry;

	carry = (nb > 0) ? nb : -nb;
	if (nb < 0)
		ft_putchar_fd('-', fd);
	if (carry >= 10)
		ft_putnbr_fd(carry / 10, fd);
	ft_putchar_fd(48 + carry % 10, fd);
}
