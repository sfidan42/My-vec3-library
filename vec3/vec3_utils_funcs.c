#include "vec3.h"

void	ft_shorten(double **e, double t)
{
	(*e)[0] /= t;
	(*e)[1] /= t;
	(*e)[2] /= t;
}

void	ft_lengthen(double **e, double t)
{
	(*e)[0] *= t;
	(*e)[1] *= t;
	(*e)[2] *= t;
}

double	ft_dot(double *ee, double *eee)
{
	return (ee[0] * eee[0] + ee[1] * eee[1] + ee[2] * eee[2]);
}

double	*ft_cross(double *ee, double *eee)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[1] * eee[2] - ee[2] * eee[1];
	e[1] = ee[2] * eee[0] - ee[0] * eee[2];
	e[2] = ee[0] * eee[1] - ee[1] * eee[0];
	return (e);
}

double	*ft_unit_vec(double *e)
{
	return (ft_div(e, ft_length(e)));
}
