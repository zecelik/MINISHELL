
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*last;
	void	*content;

	last = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			del(content);
			ft_lstdelone(last, del);
			return (0);
		}
		ft_lstadd_back(&last, ft_lstnew(content));
		lst = lst->next;
	}
	return (last);
}
