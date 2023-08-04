#include "vec3.h"

void	ft_putdbl(double num)
{
	double	integral;
	double	fraction;

	fraction = modf(num, &integral);
	ft_putnbr_fd(integral, 1);
	ft_putchar_fd('.', 1);
	ft_putnbr_fd(fraction * 10000, 1);
}

void	ft_print(double *e)
{
	ft_putdbl(e[0]);
	ft_putchar_fd(' ', 1);
	ft_putdbl(e[1]);
	ft_putchar_fd(' ', 1);
	ft_putdbl(e[2]);
	ft_putchar_fd('\n', 1);
}

double	ft_length(double *e)
{
	return (sqrt(ft_length_squared(e)));
}

double	ft_length_squared(double *e)
{
	return (ft_dot(e, e));
}
