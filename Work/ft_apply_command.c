/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 06:58:06 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/12 14:59:00 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		ft_apply_command(char *str, t_list **a, t_list **b)
{
	if (ft_strcmp(str, "sa") == 0)
		swap_a(a);
	else if (ft_strcmp(str, "sb") == 0)
		swap_b(b);
	else if (ft_strcmp(str, "ss") == 0)
		swap_ab(a, b);
	else if (ft_strcmp(str, "pa") == 0)
		push_a(a, b);
	else if (ft_strcmp(str, "pb") == 0)
		push_b(a, b);
	else if (ft_strcmp(str, "ra") == 0)
		rotate_a(a);
	else if (ft_strcmp(str, "rb") == 0)
		rotate_b(b);
	else if (ft_strcmp(str, "rr") == 0)
		rotate_ab(a, b);
	else if (ft_strcmp(str, "rra") == 0)
		rev_rotate_a(a);
	else if (ft_strcmp(str, "rrb") == 0)
		rev_rotate_b(b);
	else if (ft_strcmp(str, "rrr") == 0)
		rev_rotate_ab(a, b);
	else
		ft_putendl("Error");
}
