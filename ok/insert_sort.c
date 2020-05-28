/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:18:46 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/15 11:47:34 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		tot_value(t_list *a)
{
	int i;
	
	i = 0;
	while (a)
	{
		if (a)
			i++;
		a = a->next;
	}
	return (i);
}

int		push_b_and_write(t_list **a, t_list **b)
{
	int i;

	i = 0;
	push_b(a, b);
	write(1, "pb\n", 3);
	i++;
	return (i);
}

int		insert_sort(t_list **a, t_list **b, int i)
{
	int	small;
	int	tot;
	int	pos;

	while (*a)
	{
		small = ft_min_finder(*a, small);
		tot = tot_value(*a);
		pos = pos_finder(*a, pos, small);
		if (small == (*a)->num)
		{
			small = push_and_find(a, b, small);
			tot = tot_value(*a);
			pos = pos_finder(*a, pos, small);
			i++;
		}
		if (*a)
			i += ra_or_rra(a, tot, pos);
		if (ft_final_confirmed(*a, *b) == 0)
			return (i);
		if (*a)
			i += push_b_and_write(a, b);
	}
	return (i);
}
