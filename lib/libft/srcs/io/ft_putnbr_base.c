/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:11:53 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"

void	ft_putnbr_base(int nb, unsigned int base)
{
	unsigned int	carry;
	char			*strbase;

	strbase = "0123456789ABCDEF";
	carry = (nb > 0) ? nb : -nb;
	if (nb < 0)
		ft_putchar('-');
	if (carry >= base)
		ft_putnbr_base(carry / base, base);
	ft_putchar(strbase[carry]);
}
