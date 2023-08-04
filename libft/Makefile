# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfidan <sfidan@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 12:54:28 by sfidan            #+#    #+#              #
#    Updated: 2023/08/04 13:55:22 by sfidan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c			ft_memset.c \
			ft_bzero.c			ft_putchar_fd.c \
			ft_calloc.c			ft_putendl_fd.c \
			ft_isalnum.c		ft_putnbr_fd.c \
			ft_isalpha.c		ft_putstr_fd.c \
			ft_isascii.c		ft_split.c \
			ft_isdigit.c		ft_strchr.c \
			ft_isprint.c		ft_strcmp.c \
			ft_itoa.c			ft_strdup.c \
			ft_lstadd_back.c	ft_striteri.c \
			ft_lstadd_front.c	ft_strjoin.c \
			ft_lstclear.c		ft_strlcat.c \
			ft_lstdelone.c		ft_strlcpy.c \
			ft_lstiter.c		ft_strlen.c \
			ft_lstlast.c		ft_strmapi.c \
			ft_lstmap.c			ft_strncmp.c \
			ft_lstnew.c			ft_strnstr.c \
			ft_lstsize.c		ft_strrchr.c \
			ft_memchr.c			ft_strtrim.c \
			ft_memcmp.c			ft_substr.c \
			ft_memcpy.c			ft_tolower.c \
			ft_memmove.c		ft_toupper.c
OBJS	=	$(SRCS:.c=.o)
CFLAGS	=	-Werror -Wextra -Wall
NAME	=	libft.a

RED		=	\033[1;31m
END		=	\033[0m

all: $(OBJS) $(NAME)

$(NAME): $(SRCS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@printf .
	@gcc -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(RED)libft clean$(END)"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re