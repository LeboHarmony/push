/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:39:48 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/05 15:52:10 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate_a(t_list **nums)
{
	t_list *head;

	head = *nums;
	if (*nums == NULL)
		return ;
	while ((*nums)->next != NULL)
		*nums = (*nums)->next;
	(*nums)->next = head;
	head = head->next;
	*nums = (*nums)->next;
	(*nums)->next = NULL;
	*nums = head;
}

void	rotate_b(t_list **nums)
{
	t_list *head;

	head = *nums;
	if (*nums == NULL)
		return ;
	while ((*nums)->next != NULL)
		*nums = (*nums)->next;
	(*nums)->next = head;
	head = head->next;
	*nums = (*nums)->next;
	(*nums)->next = NULL;
	*nums = head;
}

void	rotate_ab(t_list **a, t_list **b)
{
	rotate_a(a);
	rotate_b(b);
}
