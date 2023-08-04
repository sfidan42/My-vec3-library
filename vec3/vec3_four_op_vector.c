#include "vec3.h"

double	*ft_vec3_add(double *ee, double *eee)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] + eee[0];
	e[1] = ee[1] + eee[1];
	e[2] = ee[2] + eee[2];
	return (e);
}

double	*ft_vec3_subs(double *ee, double *eee)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] - eee[0];
	e[1] = ee[1] - eee[1];
	e[2] = ee[2] - eee[2];
	return (e);
}

double	*ft_vec3_div(double *ee, double *eee)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] / eee[0];
	e[1] = ee[1] / eee[1];
	e[2] = ee[2] / eee[2];
	return (e);
}

double	*ft_vec3_mult(double *ee, double *eee)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] * eee[0];
	e[1] = ee[1] * eee[1];
	e[2] = ee[2] * eee[2];
	return (e);
}
