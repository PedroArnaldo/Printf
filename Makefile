# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 15:58:19 by parnaldo          #+#    #+#              #
#    Updated: 2022/07/05 11:26:32 by parnaldo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I
AR = ar rcs
LIBFT = libft/
NAME = libftprintf.a
INCLUDE = include/

SRC = ft_printfutils.c \
	  ft_printf.c \
	  ft_itoa.c \
	  ft_printfdec.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@make -C $(LIBFT)
		@cp libft/libft.a
		@mv libft.a $(NAME)
		@$(AR) $(NAME) $(OBJS)

clean:
		@$(RM) $(OBJS)
		@make clean -C $(LIBFT)

fclean: clean
		@$(RM) $(NAME)
		@$(RM) -f $(LIBFT)/libft.a

re: fclean $(NAME)

.PHONY: all clean fclean re
