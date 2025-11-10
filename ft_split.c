/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:50:17 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/06 15:53:26 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_word(const char *s, char c)
{
	size_t	i;
	size_t	ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			ct++;
		i++;
	}
	return (ct);
}

static	int	ft_fillres(char **res, int res_len, const char *str, char sp)
{
	int	i;
	int	j;
	int	wrdlen;

	i = 0;
	while (i < res_len)
	{
		j = -1;
		wrdlen = 0;
		while (*str && *str == sp)
			str++;
		while (*(str + wrdlen) && *(str + wrdlen) != sp)
			wrdlen++;
		res[i] = (char *)malloc(sizeof(char) * (wrdlen + 1));
		if (!res[i])
			return (0);
		while (++j < wrdlen)
			res[i][j] = *(str++);
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (1);
}

static	void	free_all(char **res)
{
	int	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		res_len;

	if (!s)
		return (NULL);
	res_len = ft_count_word(s, c);
	res = malloc(sizeof(char *) * (res_len + 1));
	if (res == NULL)
		return (NULL);
	if (!ft_fillres(res, res_len, s, c))
	{
		free_all(res);
		return (NULL);
	}
	return (res);
}
