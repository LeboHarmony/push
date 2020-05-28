/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_confirmed.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:23:33 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/10 09:26:46 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_first_confirmed(t_list *nums)
{
	while (nums)
	{
		if (nums->next)
		{
			if (nums->num > nums->next->num)
				return (1);
		}
		nums = nums->next;
	}
	return (0);
}
