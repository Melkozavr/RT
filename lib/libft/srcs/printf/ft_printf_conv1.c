/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 02:34:36 by modaouch          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ftio.h"

void	ft_percent(va_list ap, t_arg *stk)
{
	(void)ap;
	ft_putchar('%');
	stk->i++;
}

void	ft_digit(va_list ap, t_arg *stk)
{
	ft_putnbr(va_arg(ap, int));
	stk->i++;
}

void	ft_octal(va_list ap, t_arg *stk)
{
	ft_putnbr_base(va_arg(ap, int), 8);
	stk->i++;
}

void	ft_hex(va_list ap, t_arg *stk)
{
	ft_putnbr_base_low(va_arg(ap, int), 16);
	stk->i++;
}

void	ft_hex_up(va_list ap, t_arg *stk)
{
	ft_putnbr_base(va_arg(ap, int), 16);
	stk->i++;
}
