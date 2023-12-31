

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	if (!dst)
		return (0);
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = lendst;
	i = 0;
	if (lendst < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && lendst + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (lendst > dstsize)
		lendst = dstsize;
	return (lendst + lensrc);
}
