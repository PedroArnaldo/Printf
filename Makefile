# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 15:58:19 by parnaldo          #+#    #+#              #
#    Updated: 2022/07/04 18:33:30 by parnaldo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
ARC = ar -qs

NAME = libftprintf.a

SRC = ft_printfutils.c \
	  ft_printf.c \
	  ft_itoa.c \
	  ft_printfdec.c

OBJS = $(SRC:.c=.o)

LIBFT = libft/

.c.o:
		$(CC) $(FLAGS) -I $(LIBFT) $< -o $(<:.C=.o)

$(NAME): $(OBJS)
	cd $(LIBFT) && make && cp libft.a ../$(NAME)
	$(ARC) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)
		cd $(LIBFT) && make fclean
fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)
