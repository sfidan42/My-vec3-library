SRC		=	vec3_four_op_scaler.c \
			vec3_four_op_vector.c \
			vec3_general.c \
			vec3_utils_funcs.c
OBJS	=	$(SRC:.c=.o)
NAME	=	vec3.a
CFLAGS	=	-Werror -Wextra -Wall

RED		=	\033[1;31m
END		=	\033[0m

all: $(OBJS) $(NAME)

$(NAME): $(SRCS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@printf "..........."
	@gcc -c $(CFLAGS) $< -lm -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(RED)vec3 clean$(END)"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re