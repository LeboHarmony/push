#include "checker.h"

long	smallest_finder(t_list *b)
{
	int smallest;

	smallest = b->num;
	while (b != NULL)
	{
		if (smallest >= b->num)
			smallest = b->num;
		b = b->next;
	}
	return (smallest);
}

long	biggest_finder(t_list *a)
{
	int biggest;

	biggest = a->num;
	while (a != NULL)
	{
		if (biggest <= a->num)
			biggest = a->num;
		a = a->next;
	}
	return (biggest);
}