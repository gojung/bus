#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return -1;
	if(index <= 1)
		return index;
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	printf("%d", ft_fibonacci(3));
	return 0;
}
