#include "checker.h"

int		tot_b(t_list *b)
{
	int i;

	i = 0;
	while (b)
	{
		i++;
		b = b->next;
	}
	return (i);
}