/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:48:46 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/10 11:12:35 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	diddy;

	if (fd >= 1)
	{
		if (n == INT_MIN)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		diddy = (n % 10) + '0';
		ft_putchar_fd(diddy, fd);
	}
}
