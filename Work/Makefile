# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 08:26:58 by lkebethi          #+#    #+#              #
#    Updated: 2019/09/18 07:05:52 by lkebethi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

CHECKER_NAME = checker

PUSH_SWAP_NAME = push_swap

LIBFT = libft/

CHECKER_SOURCES = checker.c\
				  swap_a_b.c\
				  push_a_b.c\
				  rotate_a_b.c\
				  rev_rotate_a_b.c\
				  digit_confirm.c\
				  ft_apply_command.c\
				  ft_command.c\
				  ft_final_confirmed.c\
				  ft_first_confirmed.c\
				  ft_free.c\
				  ft_min_finder.c\
				  ft_str_file.c\
					algo.c\

PUSH_SWAP_SOURCES = push_swap.c\
					algo.c\
					ft_str_file.c\
					swap_a_b.c\
					push_a_b.c\
					rotate_a_b.c\
					rev_rotate_a_b.c\
					digit_confirm.c\
					ft_apply_command.c\
					ft_command.c\
					ft_final_confirmed.c\
					ft_first_confirmed.c\
					ft_free.c\
					ft_min_finder.c\
					sort_three.c\
					insert_sort.c\
					ft_range.c\
					find.c\
					helper_functions.c\
					helper.c\
					b_to_a.c\
					three_solutions.c\
					bigger_list.c\
					large_bulk.c\
					med_bulk.c\
					tot_b.c\
					ordered.c\
					sort_five.c\
				
					

all: $(CHECKER_NAME) $(PUSH_SWAP_NAME)

$(CHECKER_NAME):
	make -C $(LIBFT)/
	$(CC) $(CFLAGS) $(CHECKER_SOURCES) $(LIBFT)libft.a -I $(LIBFT) -o $(CHECKER_NAME)

$(PUSH_SWAP_NAME):
	$(CC) $(CFLAGS) $(PUSH_SWAP_SOURCES) $(LIBFT)libft.a -I $(LIBFT) -o $(PUSH_SWAP_NAME)

clean:
	make -C $(LIBFT)/ clean
	rm -f $(OBJECTS)

fclean:
	make -C $(LIBFT)/ fclean
	rm -f $(CHECKER_NAME) $(PUSH_SWAP_NAME)

re: fclean all
