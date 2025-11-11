/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoabied <yoabied@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 08:11:57 by yoabied           #+#    #+#             */
/*   Updated: 2025/11/06 14:04:16 by yoabied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*rn;

	if (!del || !lst)
		return ;
	rn = *lst;
	while (rn != NULL)
	{
		tmp = rn;
		rn = rn->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
