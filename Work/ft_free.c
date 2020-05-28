/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:21:58 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/11 09:21:37 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_free_ab(t_list **a, t_list **b)
{
	ft_free(a);
	ft_free(b);
}

void	ft_free(t_list **all)
{
	
	t_list *tmp;

	if (!(*all))
		return ;
	while (*all)
	{
		tmp = (*all)->next;
		free(*all);
		(*all) = tmp;
	}
	(*all) = NULL;
}
