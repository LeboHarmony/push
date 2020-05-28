/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:38:53 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/18 07:36:04 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int				bulk_list(t_list **a, t_list **b, int i, int numbers)
{
	if (numbers <= 200)
	{
		i += med_bulk(a, b, i);
		return (i);
	}
	if (numbers <= 800)
	{
		i += large_bulk(a, b, i);
		return (i);
	}
	return (i);
}

int			three_to_five(t_list **a, t_list **b, int flag, int ac)
{
	int	i;

	i = 0;
	if (ac == 4 && flag == 0)
		i += sort_three(a);
	if (ac == 6 && flag == 0)
		i += sort_five(a, b, i);
	if (ac == 5 && flag == 1)
		i += sort_three(a);
	if (ac == 7 && flag == 1)
		i += sort_five(a, b, i);
	return (i);
}

t_list		*create_list_p(int ac, char **av, t_list **a)
{
	t_list	*hold_head;
	t_list	*head;
	t_list	*temp;
	int		i;

	i = 2;
	i = (av[1][0] == '-' && av[1][1] == 'j') ? 3 : 2;
	head = *a;
	hold_head = head;
	if (av[1][0] == '-' && av[1][1] == 'j')
		head->num = ft_atoi_digit(av[2], a);
	else
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

void	print_list_p(t_list *nums)
{
	while (nums != NULL)
	{
		ft_putnbr(nums->num);
		ft_putstr("\n");
		nums = nums->next;
	}
}

int		main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	a = NULL;
	flag = (av[1][0] == '-' && av[1][1] == 'j') ? 1 : 0;
	if (!(a = malloc(sizeof(t_list))))
		return (0);
	a = create_list_p(ac, av, &a); //_p
	b = NULL;
	if (a == NULL || ft_first_confirmed(a) == 0)
	{
		ft_free(&a);
		return (0);
	}
	if (ac >= 4 &&ac <= 7)
		i += three_to_five(&a, &b, flag, ac);
	if (ac >= 8 && ac <= 800)
		i += bulk_list(&a, &b, i, ac);
	if (ac >= 801)
		bigger_list(&a, &b, i);
	if (ft_final_confirmed(a, b) == 1)
		i = insert_sort(&a, &b, i);
	if (flag == 1)
		print_list_p(a);
	ft_free(&a);
	ft_free(&b);
	return (0);
}	

