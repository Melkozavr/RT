/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:18:21 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"

void	ft_putnbr(int nb)
{
	unsigned int carry;

	carry = (nb > 0) ? nb : -nb;
	if (nb < 0)
		ft_putchar('-');
	if (carry >= 10)
		ft_putnbr(carry / 10);
	ft_putchar(48 + carry % 10);
}
