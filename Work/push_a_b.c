/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:34:41 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/11 09:10:39 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_a(t_list **a, t_list **b)
{
	t_list *temp_b;

	if (*b == NULL)
		return ;
	temp_b = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = temp_b;
}

void	push_b(t_list **a, t_list **b)
{
	t_list *temp_a;

	if (*a == NULL)
		return ;
	temp_a = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = temp_a;
}
