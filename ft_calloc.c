/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:48:02 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/07 22:19:13 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aloc;

	if (!count || !size)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	aloc = malloc(count * size);
	if (!aloc)
		return (NULL);
	ft_bzero(aloc, count * size);
	return (aloc);
}
