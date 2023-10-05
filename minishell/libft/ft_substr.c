

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	j;

	i = start;
	j = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return ((char *)(ft_calloc(1, 1)));
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (s[i] && i < len + start)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = 0;
	return (substr);
}
