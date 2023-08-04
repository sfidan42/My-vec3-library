#ifndef VEC3_H
# define VEC3_H
# include <math.h>
# include "../libft/libft.h"

// vec3_general.c
void	ft_print(double *e);
double	ft_length(double *e);
double	ft_length_squared(double *e);

// vec3_four_op_scaler.c
double	*ft_add(double *ee, double t);
double	*ft_subs(double *ee, double t);
double	*ft_div(double *ee, double t);
double	*ft_mult(double *ee, double t);

// vec3_four_op_vector.c
double	*ft_vec3_add(double *ee, double *eee);
double	*ft_vec3_subs(double *ee, double *eee);
double	*ft_vec3_div(double *ee, double *eee);
double	*ft_vec3_mult(double *ee, double *eee);

// vec3_utils_funcs.c
void	ft_shorten(double **e, double t);
void	ft_lengthen(double **e, double t);
double	ft_dot(double *ee, double *eee);
double	*ft_cross(double *ee, double *eee);
double	*ft_unit_vec(double *e);

#endif