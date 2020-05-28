/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_finder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:31:19 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/10 09:33:50 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_min_finder(t_list *a, int min)
{
	min = a->num;
	while (a != NULL)
	{
		if (min >= a->num)
			min = a->num;
		a = a->next;
	}
	return (min);
}
