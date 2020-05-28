/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:03:58 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/12 13:16:23 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		ft_duplicate(t_list *head, int nbr, t_list **a)
{
	int i;

	i = 0;
	while (head)
	{
		if (head->num == nbr)
			i++;
		head = head->next;
	}
	if (i >= 2)
	{
		ft_putendl("Error");
		ft_free(a);
		exit(1);
	}
}

int			ft_command(t_list **a, t_list **b)
{
	char *line;

	while (get_next_line(0, &line) > 0)
	{
		ft_apply_command(line, a, b);
		free(line);
	}
	if (*b != NULL)
	{
		ft_putendl("OK");
		ft_free(a);
		ft_free(b);
		exit(1);
	}
	if (ft_final_confirmed(*a, *b) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (0);
}
