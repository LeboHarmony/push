/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:36:26 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/12 14:55:56 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list		*create_list(int ac, char **av, t_list **a)
{
	t_list	*hold_head;
	t_list	*head;
	t_list	*temp;
	int		i;

	i = 2;
	head = *a;
	hold_head = head;
	head->num = ft_atoi_digit(av[1], a);
	head->next = NULL;
	while (i < ac)
	{
		temp = malloc(sizeof(t_list));
		temp->num = ft_atoi_digit(av[i], a);
		temp->next = NULL;
		hold_head->next = temp;
		hold_head = hold_head->next;
		ft_duplicate(head, temp->num, a);
		i++;
	}
	return (head);
}

int			main(int ac, char **av)
{
	t_list *a;
	t_list *b;

	if (ac < 2)
		return (0);
	if (!(a = malloc(sizeof(t_list))))
		return (0);
	a = create_list(ac, av, &a);
	b = NULL;
	if (a == NULL)
		return (0);
	ft_command(&a, &b);
	ft_free(&a);
	ft_free(&b);
	return (0);
}
