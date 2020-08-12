/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftconvert.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 01:08:44 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTCONVERT_H
# define FTCONVERT_H

float	ft_atof(char const *str);
int		ft_atoi(char const *str);
int		ft_atoi_base(char const *str, int base);
char	*ft_itoa(int n);
char	*ft_itoa_base(int value, int base);
char	*ft_lltoa(long long value);
char	*ft_lltoa_base(long long value, int base);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_dtoa(double value, int precision);

#endif
