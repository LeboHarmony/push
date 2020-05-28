#include "checker.h"

int   range_pos(t_list *a, int local_max)
{
  int i;

  i = -1;
  while (a)
  {
    i++;
    if (a->num <= local_max)
    {
      return (i);
    }
    a = a->next;
  }
  return (i);
}


int		before_push_b(t_list **a, t_list **b)
{
	int pos;
	int i;

	i = 0;
	pos = pos_for_b(a, b);
	i += which_x_amount(b, pos);
	i += push_b_and_write(a, b);
	return (i);
}

int		a_handle_while_range(t_list **a, t_list **b, int range, int chunk)
{
	int tot;
	int local_max;
	int i;

	tot = tot_value(*a);
	local_max = tot / 5;
	i = 0;
	while (ft_range(*a, chunk) == 1)
	{
		range = range_pos(*a, local_max);
		if ((*a) && !((*a)->num <= chunk))
			i += a_which_x_amount(a, range);
		if ((*a) && (*a)->num <= chunk)
		{
			if (tot_b(*b) == 1 || (!*b))
				i += b_empty_or_one(a, b);
		}
		if (tot_b(*b) > 1 && (*a) && (*a)->num <= chunk)
			i += sort_b_big_or_small(a, b);
		if (tot_b(*b) > 1 && (*a) && (*a)->num <= chunk)
			i += before_push_b(a, b);
	}
	return (i);
}

int		med_bulk(t_list **a, t_list **b, int i)
{
	int local_max;
	int	tot;
	int j;
	int tot_div_chunk;
	int range;

	j = 0;
	tot = tot_value(*a);
	while (*a)
	{
		j++;
		local_max = tot / 5;
		tot_div_chunk = local_max * j;
		range = range_pos(*a, local_max);
		if (ft_range(*a, tot_div_chunk) == 1)
			i += a_handle_while_range(a, b, range, tot_div_chunk);
	}
	if (!*a)
		i += rb_or_rrb_one_hundered(a, b, tot);
	return (i);
}