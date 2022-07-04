# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 15:58:19 by parnaldo          #+#    #+#              #
#    Updated: 2022/07/04 15:42:12 by parnaldo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printfutils.c \
	  ft_printf.c \
	  ft_itoa.c \
	  ft_printfdec.c 

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)
