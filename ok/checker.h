/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:42:50 by lkebethi          #+#    #+#             */
/*   Updated: 2019/09/18 07:33:35 by lkebethi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct		s_list
{
	int				num;
	struct s_list	*next;
}					t_list;

void			swap_a(t_list **nums);
void			swap_b(t_list **nums);
void			swap_ab(t_list **a, t_list **b);
void			push_a(t_list **a, t_list **b);
void			push_b(t_list **a, t_list **b);
void			rotate_a(t_list **nums);
void			rotate_b(t_list **nums);
void			rotate_ab(t_list **a, t_list **b);
void			rev_rotate_a(t_list **nums);
void			rev_rotate_b(t_list **nums);
void			rev_rotate_ab(t_list **a, t_list **b);
t_list			*create_list(int ac, char **av, t_list **a);
void			exit_not_num(t_list **a);
void			above_int_max(long long nbr, t_list **a);
long long		ft_atoi_digit(const char *str, t_list **a);
void			ft_duplicate(t_list *head,int nbr, t_list **a);
int				ft_command(t_list **a, t_list **b);
void			ft_free_ab(t_list **a, t_list **b);
void			ft_free(t_list **all);
void			ft_apply_command(char *str, t_list **a, t_list **b);
int				ft_final_confirmed(t_list *nums, t_list *b);
int				ft_first_confirmed(t_list *nums);
int				ft_min_finder(t_list *a, int min);
//int				max_finder(t_list *a, int max);
char			**ft_str_file(int ac, char **av);
int				sort_three(t_list **a);
int				sort_three_sa_rra(t_list **a);
int				sort_three_sa_ra(t_list **a);
int				sort_three_sa_and_write(t_list **a);
int				sort_three_ra_and_write(t_list **a);
int				sort_three_rra_and_write(t_list **a);
int				insert_sort(t_list **a, t_list **b, int i);
int				tot_value(t_list *a);
int				push_b_and_write(t_list **a, t_list **b);
t_list			*create_list_p(int ac, char **av, t_list **a);
int				three_to_five(t_list **a, t_list **b, int flag, int ac);
void			print_list_p(t_list *nums);
int				push_and_find(t_list **a, t_list **b, int small);
int				push_and_i(t_list **a, t_list **b);
int				ra_or_rra_two(t_list **a, int tot_minus_pos, int i);
int				ra_or_rra(t_list **a, int tot, int pos);
int				pos_finder(t_list *a, int pos, int small);
int				rb_or_rrb_one_hun_two(t_list **a, t_list **b, int pos, int tot);
int				rb_or_rrb_one_hun_one(t_list **a, t_list **b, int pos, int i);
int				rb_or_rrb_one_hundered(t_list **a, t_list **b, int tot);
int				j_handle_while_range(t_list **a, t_list **b, int range_pos, int chunk);
int				bigger_list(t_list **a, t_list **b, int i);
long			smallest_finder(t_list *b);
long			biggest_finder(t_list *a);
int				ft_range(t_list *a, int local_max);
int				bottom_b_value(t_list *b);
int				b_largest_location(t_list *b, long b_largest);
int				b_empty_or_one(t_list **a, t_list **b);
int				b_small_pos_funct(t_list *b, int b_smallest);
int				ra_x_amount(t_list **a, int pos);
int				rra_x_amount(t_list **a, int pos);
int				a_which_x_amount(t_list **a, int range_pos);
int				before_push_b_five(t_list **a, t_list **b);
int				bl_handle_while_range(t_list **a, t_list **b, int range_p, int chunk);
int				bulk_list(t_list **a, t_list **b, int i, int numbers);
int				large_bulk(t_list **a, t_list **b, int i);
int   		range_pos(t_list *a, int local_max);
int				before_push_b(t_list **a, t_list **b);
int				a_handle_while_range(t_list **a, t_list **b, int range, int chunk);
int				med_bulk(t_list **a, t_list **b, int i);
int				sort_b_big_or_small(t_list **a, t_list **b);
int				pos_for_b(t_list **a, t_list **b);
int				rb_x_amount(t_list **b, int pos);
int				rrb_x_amount(t_list **b, int pos);
int				which_x_amount(t_list **b, int pos);
int				five_pb_first_nums(t_list **a, t_list **b, int i);
int				sort_a_big_or_small(t_list **a, t_list **b);
int				pos_for_a(t_list **a, t_list **b, int pos);
int				pos_finder_test(t_list *a, int small);
int				sort_five(t_list **a, t_list **b, int i);
int				tot_b(t_list *b);

#endif
