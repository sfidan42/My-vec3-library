MAKEFLAGS	+=	--no-print-directory

CFLAGS	=	-Werror -Wall -Wextra
LIBFT	=	libft/libft.a
VEC3	=	vec3/vec3.a
PROGRAM	=	run

RED		=	\033[1;31m
GREEN	=	\033[1;32m
YELLOW	=	\033[1;33m
CYAN	=	\033[1;36m
END		=	\033[0m

all: $(LIBFT) $(VEC3) $(PROGRAM)

$(LIBFT):
	@make -C libft
	@echo libft done

$(VEC3):
	@make -C vec3
	@echo vec3 done

$(PROGRAM): main.c
	@gcc main.c $(CFLAGS) $(VEC3) $(LIBFT) -lm -o $(PROGRAM)

clean:
	@make -C libft clean
	@make -C vec3 clean

fclean:
	@make -C libft fclean
	@make -C vec3 fclean
	@rm -f $(PROGRAM)
	@echo "$(RED)all clean$(END)"

re: fclean all

.PHONY: all clean fclean re