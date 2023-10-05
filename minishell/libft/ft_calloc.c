

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pntr;

	pntr = (void *)malloc(count * size);
	if (!pntr)
		return (NULL);
	ft_bzero(pntr, size * count);
	return (pntr);
}
