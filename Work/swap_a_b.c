/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:54:20 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/11 09:18:59 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_a(t_list **nums)
{
	t_list *temp;

	if (*nums == NULL)
		return ;
	temp = *nums;
	*nums = (*nums)->next;
	temp->next = (*nums)->next;
	(*nums)->next = temp;
}

void	swap_b(t_list **nums)
{
	t_list *temp;

	if (*nums == NULL)
		return ;
	temp = *nums;
	*nums = (*nums)->next;
	temp->next = (*nums)->next;
	(*nums)->next = temp;
}

void	swap_ab(t_list **a, t_list **b)
{
	swap_a(a);
	swap_b(b);
}
