/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:49:27 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/10 11:29:17 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *pi, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*pi)
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] && pi[j] && (i + j) < len && hay[i + j] == pi[j])
			j++;
		if (pi[j] == '\0')
			return ((char *)hay + i);
		i++;
	}
	return (NULL);
}
