#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(!nb && !power)
		return 0;
	if(nb && !power)
		return 1;
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	printf("%d", ft_recursive_power(2, 6));
	return 0;
}
