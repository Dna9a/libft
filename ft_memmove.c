/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:48:34 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/07 11:28:17 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	const unsigned char	*sc;

	ds = (unsigned char *)dst;
	sc = (const unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (ds < sc)
		ft_memcpy(dst, src, len);
	else
	{
		ds += len - 1;
		sc += len - 1;
		while (len--)
			*ds-- = *sc--;
	}
	return (dst);
}
