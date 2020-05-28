/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:45:22 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/06 13:03:16 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rev_rotate_a(t_list **nums)
{
	t_list *head;
	t_list *front;
	t_list *back;

	head = *nums;
	front = *nums;
	back = *nums;
	if (*nums == NULL)
		return ;
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	if (front->next == NULL)
	{
		front->next = head;
		back->next = NULL;
	}
	*nums = front;
}

void	rev_rotate_b(t_list **nums)
{
	t_list *head;
	t_list *front;
	t_list *back;

	head = *nums;
	front = *nums;
	back = *nums;
	if (*nums == NULL)
		return ;
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	if (front->next == NULL)
	{
		front->next = head;
		back->next = NULL;
	}
	*nums = front;
}

void	rev_rotate_ab(t_list **a, t_list **b)
{
	rev_rotate_a(a);
	rev_rotate_b(b);
}
