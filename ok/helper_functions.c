#include "checker.h"

int		bottom_b_value(t_list *b)
{
	int i;

	i = 0;
	while (b && b->next)
		b = b->next;
	i = b->num;
	return (i);
}

int		b_largest_location(t_list *b, long b_largest)
{
	int i;

	i = 0;
	while (i != b_largest)
	{
		if (b->num == b_largest)
			return (i);
		b = b->next;
	}
	return (i);
}

int		b_empty_or_one(t_list **a, t_list **b)
{
	int i;

	i = 0;
	i += push_b_and_write(a, b);
	return (i);
}

int		b_small_pos_funct(t_list *b, int b_smallest)
{
	int pos_num;

	pos_num = 0;
	while (b)
	{
		if (b->num == b_smallest)
		{
			return (pos_num);
		}
		b = b->next;
		pos_num++;
	}
	return (pos_num);
}