/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:41:03 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/12 14:59:46 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char		**ft_str_file(int ac, char **av)
{
	if (ac < 2 || !av[1][0])
		exit(1);
	if (ac == 3 && !av[2][0])
		exit(1);
	if (av[1][0] == '-' && av[1][1] == 'n')
	{
		if (ac == 3)
			return (ft_strsplit(av[2], ' '));
		else
			return (&av[2]);
	}
	else
	{
		if (ac == 2)
			return (ft_strsplit(av[1], ' '));
		else
			return (&av[1]);
	}
	return (&av[1]);
}
