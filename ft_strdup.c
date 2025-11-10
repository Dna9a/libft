/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:48:51 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/03 20:48:52 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		ln;

	ln = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (ln + 1));
	if (s2 == NULL)
		return (NULL);
	s2[ln--] = '\0';
	while (ln >= 0)
	{
		s2[ln] = s1[ln];
		ln--;
	}
	return (s2);
}
