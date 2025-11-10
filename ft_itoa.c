/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:48:17 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/10 09:38:34 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_fill_res(char *res, int res_len, unsigned int nb, int n)
{
	res[res_len--] = '\0';
	while (nb)
	{
		res[res_len--] = (nb % 10) + 48;
		nb /= 10;
	}
	if (res_len == 0 && n)
		res[res_len] = '-';
	else if (!n)
		res[res_len] = '0';
}

char	*ft_itoa(int n)
{
	char			*res;
	int				res_len;
	unsigned int	nb;

	res_len = 0;
	nb = 0;
	if (!n)
		res_len = 1;
	else if (n < 0)
	{
		res_len++;
		nb = (unsigned int)-n;
	}
	else
		nb = n;
	res_len += ft_digit_count(nb);
	res = (char *)malloc(sizeof(char) * (res_len + 1));
	if (!res)
		return (NULL);
	ft_fill_res(res, res_len, nb, n);
	return (res);
}
