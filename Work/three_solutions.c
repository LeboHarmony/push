/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_solutions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:50:23 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/18 07:33:27 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		sort_three_sa_rra(t_list **a)
{
	int i;

	i = 2;
	swap_a(a);
	rev_rotate_a(a);
	write(1, "sa\n", 3);
	write(1, "rra\n",4);
	return (i);
}

int		sort_three_sa_ra(t_list **a)
{
	int i;

	i = 2;
	swap_a(a);
	rotate_a(a);
	write(1, "sa\n", 3);
	write(1, "ra\n", 3);
	return (i);
}

int		sort_three_sa_and_write(t_list **a)
{
	int i;

	i = 1;
	swap_a(a);
	write(1, "sa\n", 3);
	return (i);
}

int		sort_three_ra_and_write(t_list **a)
{
	int	i;

	i = 1;
	rotate_a(a);
	write(1, "ra\n", 3);
	return (i);
}

int		sort_three_rra_and_write(t_list **a)
{
	int i;

	i = 1;
	rev_rotate_a(a);
	write(1, "rra\n", 4);
	return (i);
}
