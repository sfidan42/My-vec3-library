#include "vec3/vec3.h"

int main(void)
{
    double	*e;
    void    *to_free;

	e = ft_calloc(3, sizeof(double));
    
    ft_print(e);
    
    to_free = e;
    e = ft_add(e, 4);
    free(to_free);
    
    ft_print(e);

    to_free = e;
    e = ft_unit_vec(e);
    free(to_free);

    ft_print(e);

    free(e);
}
