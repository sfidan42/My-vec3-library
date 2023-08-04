#include "vec3.h"

double	*ft_add(double *ee, double t)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] + t;
	e[1] = ee[1] + t;
	e[2] = ee[2] + t;
	return (e);
}

double	*ft_subs(double *ee, double t)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] - t;
	e[1] = ee[1] - t;
	e[2] = ee[2] - t;
	return (e);
}

double	*ft_div(double *ee, double t)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] / t;
	e[1] = ee[1] / t;
	e[2] = ee[2] / t;
	return (e);
}

double	*ft_mult(double *ee, double t)
{
	double	*e;

	e = ft_calloc(3, sizeof(double));
	e[0] = ee[0] * t;
	e[1] = ee[1] * t;
	e[2] = ee[2] * t;
	return (e);
}
