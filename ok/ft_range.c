#include "checker.h"

int		ft_range(t_list *a, int local_max)
{
	while (a)
	{
		if (a->num <= local_max)
			return (1);
		a = a->next;
	}
	return (0);
}