/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:10:06 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/18 07:35:10 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		sort_three(t_list **a)
{
	int	i;
	int	x;
	int	y;
	int	z;

	x = (*a)->num;
	y = (*a)->next->num;
	z = (*a)->next->next->num;
	i = 0;
	if (x > y && y < z && z > x)
		i += sort_three_sa_and_write(a);
	if (x > y && y > z && z < x)
		i += sort_three_sa_rra(a);
	if (x > y && y < z && z < x)
		i += sort_three_ra_and_write(a);
	if (x < y && y > z && z > y)
		i += sort_three_sa_ra(a);
	if (x < y && y > z && z < x)
		i += sort_three_rra_and_write(a);
	if (ft_first_confirmed(*a) == 0)
		return (i);
	return (0);
}
