/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_confirm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:59:02 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/12 14:58:07 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		exit_not_num(t_list **a)
{
	ft_putendl("Error");
	// ft_free(a);
	free(*a);
	exit(1);
}

void		above_int_max(long long nbr, t_list **a)
{
	//long long int i;
	long long int small;

	//i = 1;
	small = -2147483648;
	if (nbr > 2147483647)
	{
		ft_putendl("Error");
		ft_free(a);
		exit(1);
	}
	if (nbr < small)
	{
		ft_putendl("Error");
		ft_free(a);
		exit(1);
	}
}

long long	ft_atoi_digit(const char *str, t_list **a)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
		exit_not_num(a);
	above_int_max(res * sign, a);
	return (res * sign); 
}
