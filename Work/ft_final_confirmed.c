/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_confirmed.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 07:17:38 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/11 09:11:06 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_final_confirmed(t_list *nums, t_list *b)
{
	if (b)
		return (1);
	if (!nums)
		return (1);
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
