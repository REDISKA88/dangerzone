#include "libft.h"
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0)
		return (1);
	if (ft_isdigit(c) != 0)
		return (1);
	else
		return (0);
}
